#include <stdio.h>

int main(){
    int arr[100], target, i, sorted;
    int c1 = 0, c2 = 0, found1 = 0, found2 = 0;

    while(1){
        printf("Enter 100 elements in SORTED order (ascending):\n");
        for(i = 0; i < 100; i++){
            scanf("%d", &arr[i]);
        }

        sorted = 1;
        for(i = 0; i < 99; i++){
            if(arr[i] > arr[i+1]){
                sorted = 0;
                break;
            }
        }

        if(sorted == 1) break;
        else {
            printf("Array is not sorted. Try again.\n\n");
        }
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &target);

    for(i = 0; i < 100; i++){
        c1++;
        if(arr[i] == target){
            printf("Linear Search: Target found at position %d\n", i+1);
            found1 = 1;
            break;
        }
    }
    if(!found1){
        printf("Linear Search: Target not found\n");
    }

    int high = 99, low = 0, mid;
    while (low <= high){
        c2++;
        mid = (low + high) / 2;

        if(arr[mid] == target){
            printf("Binary Search: Target found at position %d\n", mid+1);
            found2 = 1;
            break;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(!found2){
        printf("Binary Search: Target not found\n");
    }
    printf("\n ****Comparison Results*** \n");
    printf("Linear search comparisons: %d\n", c1);
    printf("Binary search comparisons: %d\n", c2);

    if(c1 < c2){
        printf("Linear search was more efficient for this search.\n");
    }
    else if(c1 > c2){
        printf("Binary search was more efficient for this search.\n");
    }
    else {
        printf("Both algorithms made equal comparisons.\n");
    }
    return 0;
}
