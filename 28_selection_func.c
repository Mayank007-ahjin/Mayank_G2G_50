#include <stdio.h>

void selection(int n, int arr[]){
    int i, j, temp,min;
    for(i = 0; i < n-1; i++){
        min=i;
        for(j = i+1; j < n; j++){  
            if(arr[min] > arr[j]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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

    selection(n, arr);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}