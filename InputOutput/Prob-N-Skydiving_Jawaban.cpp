#include <stdio.h>

int main(){
	char nama1[100];
	char nama2[100];
	int umur1;
	int umur2;
	double tinggi1;
	double tinggi2;
	scanf("%s %lf %d %s %lf %d", &nama1, &tinggi1, &umur1, &nama2, &tinggi2, &umur2);
	printf("Name 1: %s\n", nama1);
	printf("Height 1: %.2lf\n", tinggi1);
	printf("Age 1: %d\n", umur1);
	printf("Name 2: %s\n", nama2);
	printf("Height 2: %.2lf\n", tinggi2);
	printf("Age 2: %d\n", umur2);
	return 0;
}
