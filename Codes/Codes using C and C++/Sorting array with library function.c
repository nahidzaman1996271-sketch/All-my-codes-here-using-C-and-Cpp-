#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(){
int arr[] = {12,45,11,47,33,49,9};
int size = 7;
qsort(arr,size,sizeof(int),compare);
printf("Sorted array is:\n");
for(int i=0; i<size;i++){
    printf("%d ",arr[i]);
}
return 0;
}

