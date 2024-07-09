#include <stdio.h>
#include <stdlib.h>

void LFU(int frames[], int frame_count, int pages[], int page_count) {
    int page_faults = 0;
    int *frequency = (int *)malloc(frame_count * sizeof(int));

    // Initialize frequency of each frame to 0
    for (int i = 0; i < frame_count; i++) {
        frequency[i] = 0;
    }

    for (int i = 0; i < page_count; i++) {
        int found = 0;

        // Check if the page is already in frames
        for (int j = 0; j < frame_count; j++) {
            if (frames[j] == pages[i]) {
                found = 1;
                frequency[j]++; // Increment frequency of the page
                break;
            }
        }

        // If not found, find the least frequently used page and replace it
        if (!found) {
            int min_freq = frequency[0], min_index = 0;
            for (int j = 1; j < frame_count; j++) {
                if (frequency[j] < min_freq) {
                    min_freq = frequency[j];
                    min_index = j;
                }
            }

            frames[min_index] = pages[i]; // Replace page
            frequency[min_index] = 1; // Reset frequency of the new page
            page_faults++;
        }

        // Print current state of frames
        printf("Frames: ");
        for (int j = 0; j < frame_count; j++) {
            if (frames[j] != -1)
                printf("%d ", frames[j]);
            else
                printf(" - ");
        }
        printf("\n");
    }

    printf("LFU Page Faults: %d\n", page_faults);
    free(frequency);
}

int main() {
    int frame_count, page_count;
    
    printf("Enter number of frames: ");
    scanf("%d", &frame_count);

    printf("Enter number of pages: ");
    scanf("%d", &page_count);

    int *pages = (int *)malloc(page_count * sizeof(int));
    int *frames = (int *)malloc(frame_count * sizeof(int));

    printf("Enter the page reference string:\n");
    for (int i = 0; i < page_count; i++) {
        scanf("%d", &pages[i]);
    }

    // Initialize frames with -1 indicating empty
    for (int i = 0; i < frame_count; i++) {
        frames[i] = -1;
    }

    // Apply LFU page replacement algorithm
    printf("\nLFU Page Replacement:\n");
    LFU(frames, frame_count, pages, page_count);

    free(pages);
    free(frames);
    return 0;
}
