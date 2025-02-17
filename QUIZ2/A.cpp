#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Customer{
    char name[1001];
    int j;
    int p;
};

void merge(Customer customers[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    Customer leftArr[n1], rightArr[n2];

    for (i = 0; i < n1; i++)
        leftArr[i] = customers[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = customers[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        double totalPriceLeft = leftArr[i].j * leftArr[i].p;
        double totalPriceRight = rightArr[j].j * rightArr[j].p;
        
        if (totalPriceLeft > totalPriceRight || 
            (totalPriceLeft == totalPriceRight)) {
            customers[k] = leftArr[i];
            i++;
        } else {
            customers[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        customers[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2) {
        customers[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(Customer customers[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(customers, left, mid);
        mergeSort(customers, mid + 1, right);

        merge(customers, left, mid, right);
    }
}

int main() {
    int N, i;
    Customer makan[1001];
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%s %d %d", makan[i].name, &makan[i].j, &makan[i].p);
    }
    mergeSort(makan, 0, N - 1);

    for (i = 0; i < N; i++) {
        int totalPrice = makan[i].j * makan[i].p;
        printf("%s %d\n", makan[i].name, totalPrice);
    }

    return 0;
}
