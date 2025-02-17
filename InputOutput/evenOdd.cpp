#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n % 2 == 1){
		printf("odd!\n", n);
	} else {
		printf("even!\n", n);
	}
	
	return 0;
}
