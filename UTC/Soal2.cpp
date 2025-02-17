#include <stdio.h>

int main(){
    int jumlahDurasi = 0, jumlahMusik, presentaseKesabaran, musik[100] = {};
    float durasiMaks;
    scanf("%d %d", &jumlahMusik, &presentaseKesabaran);
    for (int i = 0; i < jumlahMusik; i++){
        scanf("%d", &musik[i]);
        jumlahDurasi += musik[i];
    }
    int count;
    for (int i = 0; i < jumlahMusik; i++){
        durasiMaks = (jumlahDurasi/jumlahMusik) * presentaseKesabaran / 100;
        count = 0;
        if (musik[i] > durasiMaks){
            if (i == jumlahMusik - 1){
                printf("%d\n", i+1);
                count++;
            } else {
                printf("%d ", i+1);
                count++;
            }
        }
    }
    if (count == 0){
        printf("0\n");
    }
    count = 0;
    return 0;
}