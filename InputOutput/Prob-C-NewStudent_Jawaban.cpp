#include <stdio.h>

int main(){
	char nis[100], name[100];
	int age;
	scanf("%[^\n]%s %d", &name, &nis, &age);
	printf("Name: %s\nNIS: %s\nAge: %d\n", name, nis, age);
	
	return 0;
}
