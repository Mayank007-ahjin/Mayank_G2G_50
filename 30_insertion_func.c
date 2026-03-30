#include <stdio.h>

void insertion(int n, int arr[]){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = i; j > 0; j--){   // <-- fixed condition
            if(arr[j-1] > arr[j]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main(){
    int n, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    insertion(n, arr);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}