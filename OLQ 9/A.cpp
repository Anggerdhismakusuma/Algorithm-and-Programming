#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data{
	char name[55];
	int number;
};

void BubbleSort(Data arr[], int n){
	Data temp;
	for (int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if (arr[j].number < arr[j+1].number || arr[j].number == arr[j+1].number && strcmp(arr[j].name, arr[j+1].name) > 0){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int T, N;
	scanf("%d", &T);
	for(int tc = 1; tc <= T; tc++){
		scanf("%d", &N);
		Data data[100];
		for (int i = 0; i < N; i++) {
            char temp[101];
            scanf(" %[^\n]s", temp);
            
            char *name = strtok(temp, "#");
            int number = atoi(strtok(NULL, "#"));
            
            strcpy(data[i].name, name);
            data[i].number = number;
        }
        
        	BubbleSort(data, N);
        
        	printf("Case #%d:\n", tc);
	        for (int i = 0; i < N; i++) {
	            printf("%s - %d\n", data[i].name, data[i].number);
	        }
    	
	}
	
	return 0;
}
