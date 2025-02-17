// Flood at Bibi's House

#include <stdio.h>

int lantai = 0;
int tinggi, lebar;

void floodFill(int x, int y, char map[101][101]){
    if (x < 0 || y < 0 || x >= tinggi || y >= lebar || map[x][y] == '#') return;
    if (map[x][y] == '.') lantai++;
    map[x][y] = '#';
    floodFill(x + 1, y, map);
    floodFill(x - 1, y, map);
    floodFill(x, y + 1, map);
    floodFill(x, y - 1, map);
}

int main(){
    int T;
    scanf("%d", &T); getchar();
    for(int tc = 1; tc <= T; tc++){
        lantai = 0;
        char map[101][101];
        scanf("%d %d", &tinggi, &lebar); getchar();
        int x, y;
        for(int i = 0; i < tinggi; i++){
            for(int j = 0; j < lebar; j++){
                scanf("%c", &map[i][j]);
                if (map[i][j] == 'S'){
                    x = i;
                    y = j;
                }
            }
            getchar();
        }
        floodFill(x, y, map);
        printf("Case #%d: %d\n", tc, lantai);
    }
    return 0;
}