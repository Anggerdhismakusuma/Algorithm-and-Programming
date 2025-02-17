// Love for parents

// Variable yang dibutuhkan
// N = jumlah barang yang dibutuhkan jojo untuk merekam lagu
// Ci = harga awal untuk barang ke-i
// Q = toko mengubah harga barang ke-i sebanyak Q kali
// Ai = harga barang ke-i setelah mengalami Q
// Bi = harga barang ke-i setelah mengalami Q2

#include<stdio.h>

int main(){
    int N, Q, A = 0, B = 0, hargaBarang[100001] = {};
    
    // looping untuk membuat array
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &hargaBarang[i]);
    }

    // setelah array dibuat
    // ganti value array index ke-a menjadi b
    int loop;
    scanf("%d", &loop);
    for (int i = 1; i <= loop; i++){
        scanf("%d %d", &A, &B);
        hargaBarang[A-1] = B;
        printf("Case #%d: ", i);
        for (int j = 0; j < N; j++){
            if (j == N - 1){
                printf("%d\n", hargaBarang[j]);
            } else {
                printf("%d ", hargaBarang[j]);
            }
        }
    }

    return 0;
}