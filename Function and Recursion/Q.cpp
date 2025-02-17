#include <stdio.h>

void kuda(int board[10][10], int x, int y, int step){
	if(x < 0 || x >= 8 || y < 0 || y >= 8) return;
	if (step >= board[x][y]) return;
	board[x][y] = step;
	kuda(board, x-2, y+1, step+1);
	kuda(board, x-1, y+2, step+1);
	kuda(board, x+1, y+2, step+1);
	kuda(board, x+2, y+1, step+1);
	kuda(board, x+2, y-1, step+1);
	kuda(board, x+1, y-2, step+1);
	kuda(board, x-1, y-2, step+1);
	kuda(board, x-2, y-1, step+1);
}

void PrintBoard(int board[10][10]){
	for(int i = 0; i < 8; i++){
		for(int j = 0; i < 8; i++){
			printf("%d|", board[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int t;
	scanf("%d", &t); getchar();
	int board[10][10];
	for(int tc = 0; tc< t; tc++){
		char x1, y1, x2, y2;
		scanf("%c%c %c%c", &x1, &y1, &x2, &y2); getchar();
		x1 -= 'A';
		x2 -= 'A';
		y1 -= '1';
		y2 -= '1';
		for (int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				board[i][j] = 100;
			}
		}
		kuda(board, x1, y1, 0);
		printf("Case #%d: %d\n", tc+1, board[x2][y2]);
	}
	
	return 0;
}
