// Jolibi

#include <stdio.h>

int main(){
    int n, jojo, lili, bibi, other, temp = 0;
    double avg;
    scanf("%d", &n);
    scanf("%d %d %d", &jojo, &lili, &bibi);
    for(int i = 0; i < n; i++){
        scanf("%d", &other);
        temp += other;
        avg = (jojo + lili + bibi + temp) / ( 3 + n);
    }
        if (jojo >= avg){
            printf("Jojo lolos\n");
        } else {
            printf("Jojo tidak lolos\n");
        }

        if (lili >= avg){
            printf("Lili lolos\n");
        } else {
            printf("Lili tidak lolos\n");
        }

        if (bibi >= avg){
            printf("Bibi lolos\n");
        } else {
            printf("Bibi tidak lolos\n");
        }
        
    return 0;
}