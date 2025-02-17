#include <stdio.h>

#define ll long long

void swap(ll *a, ll *b) {
    ll temp = *a;
    *a = *b;
    *b = temp;
}

ll partition(ll arr[], ll low, ll high) {
    ll pivot = arr[high];
    ll i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(ll arr[], ll low, ll high) {
    if (low < high) {
        ll pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    int n;
    ll powerBoss[105] = {};
    ll jojoPower;
    ll count = 0;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lld", &powerBoss[i]);
        // printf("%lld ", powerBoss[i]);
    }
    
    quickSort(powerBoss, 0, n-1);
    

    scanf("%lld", &jojoPower);
    for(int i = 0; i < n; i++){
        if(jojoPower >= powerBoss[i]){
            jojoPower -= powerBoss[i]; 
            count++;
        }
    }
    printf("%lld\n", count);
    return 0;
}