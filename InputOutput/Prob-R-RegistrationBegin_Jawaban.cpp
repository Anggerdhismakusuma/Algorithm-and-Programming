#include <stdio.h>

int main(){
    char id[11];
    char name[100];
    char kelas;
    int num;
    scanf("%[^\n] %[^\n] %c %d", &id, &name, &kelas, &num);
    printf("Id    : %s\n", id);
    printf("Name  : %s\n", name);
    printf("Class : %c\n", kelas);
    printf("Num   : %d\n", num);

    return 0;
}