#include <stdio.h>
#include <stdlib.h>

void FIFO(int frames[], int frame_count, int pages[], int page_count) {
    int page_faults = 0, front = 0;

    for (int i = 0; i < page_count; i++) {
        int found = 0;
        // Check if the page is already in frames
        for (int j = 0; j < frame_count; j++) {
            if (frames[j] == pages[i]) {
                found = 1;
                break;
            }
        }

        // If not found, replace the oldest page
        if (!found) {
            frames[front] = pages[i];
            front = (front + 1) % frame_count;
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

    printf("FIFO Page Faults: %d\n", page_faults);
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

    // Apply FIFO page replacement algorithm
    printf("\nFIFO Page Replacement:\n");
    FIFO(frames, frame_count, pages, page_count);

    free(pages);
    free(frames);
    return 0;
}
