#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int i = low-1;
    for(int j = low; j < high; j++){
        if(arr[j] < arr[high]){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int array[30];
        for (int i = 0; i < 25; i++) {
            scanf("%d", &array[i]);
        }

        quickSort(array, 0, 24);

        int a = array[0] / 2;
        int b = array[1] - a; 
        int c = array[4] - a;
        int e = array[24] / 2;
        int d = array[23] - e;

        printf("Case #%d: %d %d %d %d %d\n", tc, a, b, c, d, e);
    }
    return 0;
}