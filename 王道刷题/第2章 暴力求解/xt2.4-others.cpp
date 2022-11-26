#include <iostream>
#include <cstdio>
#include <cmath>
#include <string.h>
using namespace std;

char map[3003][3003];
char str[6][6];
int n;

void dfs(int m, int x, int y){
    if (m == 1){
        for (int i = 0; i<n; i++)
            for (int j = 0; j<n; j++)
                map[x + i][y + j] = str[i][j];
        return;
    }
    int size = (int)pow(n*1.0, m - 1);
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (str[i][j] != ' ')
                dfs(m - 1, x + i*size, y + j*size);
        }
    }
}

int main(void){
    n = 1;
    while (n){
        cin >> n;
        getchar();
        for (int i = 0; i < n; i++){
            cin.getline(str[i],6);
        }
        int m;
        cin >> m;
        int size = (int)pow(n*1.0, m);
        for (int i = 0; i<size; i++){
            for (int j = 0; j<size; j++)
                map[i][j] = ' ';
            map[i][size] = '\0';
        }
        dfs(m, 0, 0);
        for (int i = 0; i<size; i++)
            cout<<map[i]<<endl;
    }
    return 0;
} 
