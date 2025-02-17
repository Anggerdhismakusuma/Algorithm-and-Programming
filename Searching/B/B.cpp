#include <stdio.h>
#include <string.h>

struct Student{
    char nim[1001];
    char name[1001];
};

// struct Person{
//     char num[1001];
// };

int main(){
    FILE* fptr = fopen("testdata.in", "r");
    Student students[101];
    char persons[101];
    int n, m;
    
    fscanf(fptr, "%d\n", &n);
    for(int i = 0; i < n; i++){
        fscanf(fptr, "%[^ ] %[^\n]\n", students[i].nim, students[i].name);
        // printf("%s %s\n", students[i].nim, students[i].name);
    }
    
    fscanf(fptr, "%d\n", &m);
    for(int i = 0; i < m; i++){
        bool flag = false;
        fscanf(fptr, "%s\n", persons);
        printf("Case #%d: ", i+1);
        for(int j = 0; j < n; j++){
            if(strcmp(persons, students[j].nim) == 0){
                printf("%s\n", students[j].name);
                flag = true;
                break;
            }
        }
        if(!flag) printf("N/A\n");
        
    }
    

    // bool flag;
    // for(int i = 0; i < m; i++){
    //     flag = false;
    //     printf("Case #%d: ", i+1);
    //     for(int j = 0; j < n; j++){
            
    //     }
    //     if(flag) printf("N/A\n");
    // }

    fclose(fptr);
    return 0;
}