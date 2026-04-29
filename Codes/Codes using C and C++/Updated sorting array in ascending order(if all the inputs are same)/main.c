#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,k[20],i,j;
    scanf("%d", &n);
    if(n < 2){
        printf("There is no second value\n");
        return 0;
    }
    for(i = 0; i < n; i++){
        scanf("%d", &k[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(k[i] > k[j]){
                int a = k[i];
                k[i] = k[j];
                k[j] = a;
            }
        }
    }
    int found = 0;
    for(i = 1; i < n; i++){
        if(k[i] != k[0]){
            printf("The second smallest number is: %d\n", k[i]);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("There is no second value\n");
    }
    return 0;
}
