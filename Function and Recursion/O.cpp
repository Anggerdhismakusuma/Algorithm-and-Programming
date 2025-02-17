// Pacmon

#include <stdio.h>

int f;
int tinggi, lebar;

void pacmon(int x, int y, char map[101][101]){
    if (x < 0 || y < 0 || x >= tinggi || y >= lebar || map[x][y] == '#') return;
    if (map[x][y] == '*') f++;
    map[x][y] = '#';
    pacmon(x + 1, y, map);
    pacmon(x - 1, y, map);
    pacmon(x, y + 1, map);
    pacmon(x, y - 1, map);
}

int main(){
    int T;
    scanf("%d", &T); getchar();
    for(int tc = 1; tc <= T; tc++){
        f = 0;
        char map[101][101];
        scanf("%d %d", &tinggi, &lebar); getchar();
        int x, y;
        for(int i = 0; i < tinggi; i++){
            for(int j = 0; j < lebar; j++){
                scanf("%c", &map[i][j]);
                if(map[i][j] == 'P'){
                    x = i;
                    y = j;
                }
            }
            getchar();
        }
        pacmon(x, y, map);
        printf("Case #%d: %d\n", tc, f);
    }
    return 0;
}