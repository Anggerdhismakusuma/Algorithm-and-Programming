#include <stdio.h>
#include <string.h>

struct data {
	char name[55];
	int num;
};

void swap(data *a, data*b){
	data c = *a;
	*a = *b;
	*b = c;
}

void sort(data arr[], int n){
	for (int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if (arr[j].num > arr[j+1].num){
				swap(&arr[j], &arr[j+1]);		
			} else if (arr[j].num > arr[j+1].num && strcmp(arr[j].name, arr[j+1].name) < 0){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main(){
	int t, n;
	data arr[55];
	scanf("%d", &t); getchar();
	for (int tc = 1; tc <= t; tc++){
		scanf("%d", &n); getchar();
		for(int i = 0; i < n; i++){
			scanf("%[^#]#%d", arr[i].name, &arr[i].num); getchar();
		}
		sort(arr, n);
		printf("Case #%d: \n", tc);
		for(int i = 0; i < n; i++){
			printf("%s - %d\n", arr[i].name, arr[i].num);
		}
	}
	return 0;
}
