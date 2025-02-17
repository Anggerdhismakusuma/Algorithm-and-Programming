#include <stdio.h>

int main(){
    long long int a,b,c,d,left,right;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    left = a*b;
    right = c-d;
    if (left == right)
    {
        printf("True\n");
    } else
    {
        printf("False\n");
    }
    
    
    return 0;
}