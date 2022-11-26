#include<iostream>
using namespace std;
char chess[8][8]={0};
char cnt = 0, total[92];
void change(int x, int y, int n){
	for(int i = 0; i < 8; i++){
		chess[i][y] += n;
		chess[x][i] += n;
		if(x+i >= 0 && x+i < 8 && y+i >= 0 && y+i < 8) chess[x+i][y+i] += n;
		if(x+i >= 0 && x+i < 8 && y-i >= 0 && y-i < 8) chess[x+i][y-i] += n;
		if(x-i >= 0 && x-i < 8 && y+i >= 0 && y+i < 8) chess[x-i][y+i] += n;
		if(x-i >= 0 && x-i < 8 && y-i >= 0 && y-i < 8) chess[x-i][y-i] += n;
	}
}
void dfs(int x, int y, int n){
	change(x,y,-1);
	if(x == 7)
		total[cnt++] = n;
	for(int i = 0; i < 8; i++)
		if(chess[(x+1)%8][i] == 0)
			dfs((x+1)%8,i,10*n+i+1);
	change(x,y,1);
}
int main(){
	int M;
	for(int i = 0; i < 8; i++)
		dfs(0,i,i+1);
	while(cin >> M)
		cout << total[M-1] << endl;
	return 0;
}
