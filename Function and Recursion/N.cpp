#include <stdio.h>

bool reached;

void knight(int moveCount, int maxMove, int x, int y, int xTarget, int yTarget){
    if (reached) return;

    if (x > 8 || x < 1 || y > 8 || y < 1){
        return;
    } 
    if (x == xTarget && y == yTarget){
        reached = true;
        return;
    } 
    if (moveCount == maxMove) return;
    knight(moveCount+1, maxMove, x+1, y+2, xTarget, yTarget);
    knight(moveCount+1, maxMove, x+2, y+1, xTarget, yTarget);
    knight(moveCount+1, maxMove, x+2, y-1, xTarget, yTarget);
    knight(moveCount+1, maxMove, x+1, y-2, xTarget, yTarget);
    knight(moveCount+1, maxMove, x-1, y-2, xTarget, yTarget);
    knight(moveCount+1, maxMove, x-2, y-1, xTarget, yTarget);
    knight(moveCount+1, maxMove, x-2, y+1, xTarget, yTarget);
    knight(moveCount+1, maxMove, x-1, y+2, xTarget, yTarget);
}

int main(){
    int T;
    scanf("%d",&T); getchar();
    for (int tc = 1; tc <= T; tc++){
        reached = false;
        int maxMove;
        scanf("%d", &maxMove); getchar();
        maxMove *= 2;

        char startSquare[3];
        char endSquare[3];
        scanf("%s %s", startSquare, endSquare); getchar();

        int chessBoard[10][10] = {0};
        int xStart = startSquare[0] - 'A' + 1;
        int xEnd = endSquare[0] - 'A' + 1;
        int yStart = startSquare[1] - '0';
        int yEnd = endSquare[1] - '0';
        knight(0, maxMove, xStart, yStart, xEnd, yEnd);

        printf("Case #%d: ", tc);
        if (reached) printf("YES\n");
        else printf("NO\n");
    }
}