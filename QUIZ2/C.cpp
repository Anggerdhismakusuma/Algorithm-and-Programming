#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(char arr[][1001], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    char leftArr[n1][1001], rightArr[n2][1001];

    for (i = 0; i < n1; i++) {
        strcpy(leftArr[i], arr[left + i]);
    }
    for (j = 0; j < n2; j++) {
        strcpy(rightArr[j], arr[mid + 1 + j]);
    }

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (strcmp(leftArr[i], rightArr[j]) <= 0) {
            strcpy(arr[k], leftArr[i]);
            i++;
        } else {
            strcpy(arr[k], rightArr[j]);
            j++;
        }
        k++;
    }

    while (i < n1) {
        strcpy(arr[k], leftArr[i]);
        i++;
        k++;
    }
    while (j < n2) {
        strcpy(arr[k], rightArr[j]);
        j++;
        k++;
    }
}

void mergeSort(char arr[][1001], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

// void bubbleSort(char arr[][1001], int N) {
//     for (int i = 0; i < N - 1; i++) {
//         for (int j = 0; j < N - i - 1; j++) {
//             if (strcmp(arr[j], arr[j + 1]) > 0) {
//                 char temp[1001];
//                 strcpy(temp, arr[j]);
//                 strcpy(arr[j], arr[j + 1]);
//                 strcpy(arr[j + 1], temp);
//             }
//         }
//     }
// }

int main() {
    int N, Y, page, flag = 0;
    char searchWord[1001];
    char words[10001][1001];
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
    }

    scanf("%d", &Y);

    scanf("%s", searchWord);

    mergeSort(words, 0, N - 1);
    // bubbleSort(words, N);

    for (int i = 0; i < N; i++) {
        if (strcmp(words[i], searchWord) == 0) {
            page = i / Y + 1;
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("Found at %d\n", page);
    } else {
        printf("Not Found\n");
    }

    return 0;
}
