// Treasure 

// #include <stdio.h>

// int N[1000005];

// int main(){
//     int T;
//     scanf("%d", &T);
//     for (int tc = 0; tc < T; tc++){
//         int n, m, a;
//         scanf("%d %d", &n, &m);
//         for (int i = 0; i < n; i++){
//             N[i] = 0;
//         }
//         for (int i = 0; i < m; i++){
//             scanf("%d", &a);
//             N[a-1]++;
//         }
//         int count = 0;
//         for (int i = 0; i < m; i++){
//             if (N[i] > 0){
//                 count++;
//             }
//         }
//         printf("Case #%d: %d\n", tc+1, m - count);
//     }
    
//     return 0;
// }

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t, N[1000005];
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++){
        int n,m,a;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++){
            N[i] = 1;
        }
        int count = 0;
        for (int i = 0; i < m; i++){
            scanf("%d", &a);
            if (N[a-1] == 1)
            {
                N[a-1] = 0;
            } else {
                count++;
            }
        }
        printf("Case #%d: %d\n", tc+1, count);
    }
    return 0;
}
