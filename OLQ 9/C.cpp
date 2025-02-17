#include<stdio.h>
#include<string.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void strswap(char a[], char b[]){
    char temp[55];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int partition(char name[][55], int urgency[], int low, int high){
    int pi = urgency[high];
    char patient[55];
    strcpy(patient, name[high]);

    int i = low - 1;
    for (int j = low; j < high; j++){
        if (urgency[j] > pi || urgency[j] == pi && strcmp(name[j], patient) < 0){
            i++;
            swap(&urgency[i], &urgency[j]);
            strswap(name[i], name[j]);
        }
    }
    swap(&urgency[i+1], &urgency[high]);
    strswap(name[i+1], name[high]);
    return i+1; 
}

void quicksort(char name[][55], int urgency[], int low, int high){
    if (low < high){
        int pi = partition(name, urgency, low, high);
        quicksort(name, urgency, low, pi-1);
        quicksort(name, urgency, pi+1, high);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    char name[n][55];
    int urgency[n];
    for (int i = 0; i < n; i++){
        scanf("%s %d", name[i], &urgency[i]);
    }
    quicksort(name, urgency, 0, n-1);
    for (int i = 0; i < n; i++){
        printf("%s %d\n", name[i], urgency[i]);
    }
    return 0;
}
