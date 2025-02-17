#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int tc = 1; tc <= t; tc++){
        int n;
        scanf("%d", &n);
        
        int arr[10000001];
        double total = 0;

        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            total += arr[i];
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++){
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        double median = 0;
        if(n % 2 == 0) median = (arr[n/2] + arr[n/2-1]) * 0.5;
        else median = arr[n/2];

        double mean = total/n;
        printf("Case #%d:\n", tc);
        printf("Mean : %.2lf\n", mean);
        printf("Median : %.2lf\n", median);
    }    
    return 0;
}