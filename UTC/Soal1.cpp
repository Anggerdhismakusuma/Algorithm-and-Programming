/*
INTEGER main()
    DECLARE CHAR string
    INPUT string
    DECLARE INT length (to calculate length from the string)
    FOR INT i LESS THAN len i increment by 1
        IF string index i-th is capital
            string index i-th plus by 32 (because 'A' minus 'a' is 32 in asccii)
        IF string index i-th is not a capital
            string index i-th minus by 32
        END IF
    END FOR
    OUTPUT string
    RETURN 0
END MODULE
*/


#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    scanf("%[^\n]", string);
    int len = strlen(string);
    for(int i = 0; i < len; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] += 32;
        } else if (string[i] >= 'a' && string[i] <= 'z'){
            string[i] -= 32;
        }
    }
    printf("%s\n", string);
    return 0;
}