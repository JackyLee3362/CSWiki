#include<stdio.h>
char chess[8][8]={0};
int cnt = 0, total[92];
void dfs(int x, int y, int n){
	for(int i = 0; i < 8; i++){
		chess[i][y]++;
		chess[x][i]++;
		if(x+i >= 0 && x+i < 8 && y+i >= 0 && y+i < 8) chess[x+i][y+i]++;
		if(x+i >= 0 && x+i < 8 && y-i >= 0 && y-i < 8) chess[x+i][y-i]++;
		if(x-i >= 0 && x-i < 8 && y+i >= 0 && y+i < 8) chess[x-i][y+i]++;
		if(x-i >= 0 && x-i < 8 && y-i >= 0 && y-i < 8) chess[x-i][y-i]++;
	}
	if(x == 7)
		total[cnt++] = n;
	for(int i = 0; i < 8; i++)
		if(chess[(x+1)%8][i] == 0)
			dfs((x+1)%8,i,10*n+i+1);
	for(int i = 0; i < 8; i++){
		chess[i][y]--;
		chess[x][i]--;
		if(x+i >= 0 && x+i < 8 && y+i >= 0 && y+i < 8) chess[x+i][y+i]--;
		if(x+i >= 0 && x+i < 8 && y-i >= 0 && y-i < 8) chess[x+i][y-i]--;
		if(x-i >= 0 && x-i < 8 && y+i >= 0 && y+i < 8) chess[x-i][y+i]--;
		if(x-i >= 0 && x-i < 8 && y-i >= 0 && y-i < 8) chess[x-i][y-i]--;
	}
}
int main(){
	for(int i = 0; i < 8; i++)
		dfs(0,i,i+1);
	while(scanf("%d",&cnt) != EOF)
		printf("%d\n",total[cnt-1]);
	return 0;
}
