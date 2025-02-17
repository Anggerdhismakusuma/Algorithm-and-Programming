#include <stdio.h>

int main(){
    int HH1, MM1, HH2, MM2;
    char course[100];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d:%d-%d:%d", &course, &HH1, &MM1, &HH2, &MM2); getchar();
        printf("%s %02d:%02d-%02d:%02d\n", course, HH1-1, MM1, HH2-1, MM2);
    }
    return 0;
}
