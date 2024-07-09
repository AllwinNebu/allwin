#include <stdio.h>
void main() {
    int fragment[10], b[20], p[20], i, j, nb, np, temp, lowest;
    static int barray[20], parray[20];
    printf("Enter the number of blocks: ");
    scanf("%d", &nb);
    printf("Enter the number of processes: ");
    scanf("%d", &np);
    for (i = 0; i < nb; i++) {
        printf("Enter Block %d: ", i + 1);
        scanf("%d", &b[i]);
        barray[i] = 0;  // Initialize barray to indicate all blocks are free
    }
    for (i = 0; i < np; i++) {
        printf("Enter Process %d: ", i + 1);
        scanf("%d", &p[i]);
        parray[i] = -1;  // Initialize parray to indicate no allocation yet
    }
    for (i = 0; i < np; i++) {
        lowest = 1000;  // Reset lowest for each process
        for (j = 0; j < nb; j++) {
            if (barray[j] == 0) {  // If block is not allocated
                temp = b[j] - p[i];
                if (temp >= 0 && temp < lowest) {  // Find the best fit block
                    parray[i] = j;
                    lowest = temp;
                }
            }
        }
        if (parray[i] != -1) {  // If a valid block is found
            fragment[i] = lowest;
            barray[parray[i]] = 1;  // Mark block as allocated
        }
    }
    printf("\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment");
    for (i = 0; i < np; i++) {
        if (parray[i] != -1) {
            printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", i + 1, p[i], parray[i] + 1, b[parray[i]], fragment[i]);
        } else {
            printf("\n%d\t\t%d\t\tNot Allocated", i + 1, p[i]);
        }
    }
}
