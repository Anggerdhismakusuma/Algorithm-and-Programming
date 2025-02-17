// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d", &T);
//     for (int tc = 1; tc <= T; tc++) {
//         int N;
//         scanf("%d", &N);

//         int count[1000001] = {0};
//         int unique = 0;

//         for (int i = 0; i < N; i++) {
//             int number;
//             scanf("%d", &number);

//             if (number > 0 && count[number] == 0) {
//                 count[number] = 1;
//                 unique++;
//             }
//         }

//         printf("Case #%d: %d\n", tc, unique);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d", &T);
//     for (int tc = 1; tc < T; tc++) {
//         int N, A, min_odd = 100000;
//         scanf("%d", &N);
//         for (int i = 0; i < N; i++) {
//             scanf("%d", &A);
//             int sum = 0;
//             sum += A;
//             if (A % 2 == 1 && A < min_odd) {
//                 min_odd = A;
//             }
//             sum -= A;
//             printf("%d", sum);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main(){
    int a[1000005];

    return 0;
}