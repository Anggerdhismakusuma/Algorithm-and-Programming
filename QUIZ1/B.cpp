// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     int num[N];
//     int total = 0;
//     int min_odd = 100001;

//     for (int i = 0; i < N; i++) {
//         scanf("%d", &num[i]);
//         total += num[i];
//         if (num[i] % 2 != 0 && num[i] < min_odd) {
//             min_odd = num[i];
//         }
//     }

//     if (total % 2 == 0) {
//         printf("%d\n", total);
//     } else {
//         if (min_odd != 100001) {
//             printf("%d\n", total - min_odd);
//         } else {
//             printf("0\n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int n, a[100005], min = 100000;
    long long total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
        if (a[i] < min && a[i] % 2 == 1) {
            min = a[i];
        }
        if (total % 2 == 1) {
            total -= min;
        }
    }
    printf("%lld\n", total);
    return 0;
}