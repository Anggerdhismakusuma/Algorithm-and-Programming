#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int N, M;
    
    scanf("%d %d", &N, &M);
    
    int A[N+5], Q[M+5];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < M; i++) {
        scanf("%d", &Q[i]);
    }
    
    for (int i = 0; i < M; i++) {
        int position = binarySearch(A, N, Q[i]);
        if (position == -1) {
            printf("-1\n");
        } else {
            printf("%d\n", position + 1);
        }
    }
    
    return 0;
}

