// Colsum

#include <stdio.h>

int num[1001][1001]; // Global variable

int main(){
    int T, N; // declare for testcase and matrix size
    scanf("%d", &T); // scan input T for testcase
    for (int tc = 0; tc < T; tc++){

        scanf("%d", &N); // scan input N for 2D array size
        
        /* Make the 2D array */
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                scanf("%d", &num[i][j]);
            }
        }
        /* Array completed */

        printf("Case #%d: ", tc+1);

        /* Open the array */
        for(int j = 0; j < N; j++){ // column first
            int sum = 0;
            for(int i = 0; i < N; i++){ // then the row
                sum += num[i][j]; // sum all of the column
            }

            /*Format output*/
            if (j == N - 1){
                printf("%d\n", sum);
            } else {
                printf("%d ", sum);
            }
        }
        /* End of program */
    }
    
    return 0;
}