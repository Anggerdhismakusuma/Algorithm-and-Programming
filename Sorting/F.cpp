#include <stdio.h>
#include <string.h>

struct Tugas {
    char matkul[1001];
    int deadline;
};

void swap(Tugas *a, Tugas *b){
    Tugas temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Tugas arr[], int low, int high){
    Tugas pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j].deadline < pivot.deadline || (arr[j].deadline == pivot.deadline && strcmp(arr[j].matkul, pivot.matkul) < 0)){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quickSort(Tugas arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi+1, high);
    }
}

int main(){
    int n;
    Tugas kuliah[1001];
    scanf("%d", &n); getchar();
    for(int i = 0; i < n; i++){
        scanf("%s %d", kuliah[i].matkul, &kuliah[i].deadline); getchar();
    }

    
    quickSort(kuliah, 0, n-1);

    for(int i = 0; i < n; i++){
        printf("%s\n", kuliah[i].matkul);
    }
    
    return 0;
}