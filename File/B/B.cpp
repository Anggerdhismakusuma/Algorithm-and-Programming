#include <stdio.h>
#include <string.h>

int main(){
    FILE* fptr = fopen("testdata.in", "r");

    int t;
    fscanf(fptr, "%d\n", &t);

    for(int tc = 1; tc <= t; tc++){
        int k;
        fscanf(fptr, "%d\n", &k);        
        
        char s[1001];
        fscanf(fptr, "%[^\n]", s);

        int l = strlen(s);

        for(int i = 0; i < l; i++){
            char temp;
            temp = s[i];
            if(temp == '0'){
                s[i] = 'O';
            } else if(temp == '1'){
                s[i] = 'I';
            } else if(temp == '3'){
                s[i] = 'E';
            } else if(temp == '4'){
                s[i] = 'A';
            } else if(temp == '5'){
                s[i] = 'S';
            } else if(temp == '6'){
                s[i] = 'G';
            } else if(temp == '7'){
                s[i] = 'T';
            } else if(temp == '8'){
                s[i] = 'B';
            }
        }
    
        if(k > 26){
            k = k % 26;
        }

        for(int i = 0; i < l; i++){
            if(s[i] != ' '){
                if(s[i] - k < 'A'){
                    s[i] += 26 - k;
                } else {
                    s[i] -= k;
                }
            }
        }

        printf("Case #%d: %s\n", tc, s);
    }

    return 0;
}