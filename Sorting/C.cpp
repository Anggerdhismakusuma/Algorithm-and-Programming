#include <stdio.h>
#include <string.h>

struct Student{
    char studentID[100];
    char name[100];
};

void swap(Student *a, Student *b){
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(Student arr[], int n){
    int minIdx;
    for(int i = 0; i < n-1; i++){
        minIdx = i;
        for(int j = i + 1; j < n; j++){
            if(strcmp(arr[j].studentID, arr[minIdx].studentID) < 0)
            minIdx = j;
        }
        swap(&arr[i], &arr[minIdx]);
    }
}

int main(){
    Student murid[1001];
    int n;
    
    FILE* input = fopen("testdata.in", "r");
    fscanf(input, "%d\n", &n);
    
    for(int i = 0; i < n; i++){
        fscanf(input, "%[^ ] %[^\n]\n", murid[i].studentID, murid[i].name);
    }

    BubbleSort(murid, n);
    
    for(int i = 0; i < n; i++){
        printf("%s %s\n", murid[i].studentID, murid[i].name);
    }
    return 0;
}