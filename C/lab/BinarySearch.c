#include <stdio.h>

int binary_search(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int n,key;
    printf("Enter array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements : ");
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter key\n");
    scanf("%d",&key);
    
    int result = binary_search(arr, n, key);
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found.\n", key);
    }
    
    return 0;
}
