#include <stdio.h>
#include <string.h>

struct Plant{
    char name[1001];
    char bunga[1001];
};

struct Person{
    char name[1001];
};

int main(){
    FILE* fptr = fopen("testdata.in", "r");
    int n, m;
    Plant plants[100];
    Person persons[100];

    fscanf(fptr, "%d\n", &n);
    
    for(int i = 0; i < n; i++){
        fscanf(fptr, "%[^#]#%[^\n]\n", plants[i].name, plants[i].bunga);
    }

    fscanf(fptr, "%d\n", &m);

    for(int i = 0; i < m; i++){
        fscanf(fptr, "%s\n", persons[i].name);
    }

    for(int i = 0; i < m; i++){
        bool flag = false;
        printf("Case #%d: ", i+1);
        for(int j = 0; j < n; j++){
            if(strcmp(persons[i].name, plants[j].name) == 0){
                printf("%s\n", plants[j].bunga);
                flag = true;
                break;
            }
        }
        if(!flag){
            printf("N/A\n");
        }
    }
    return 0;
}