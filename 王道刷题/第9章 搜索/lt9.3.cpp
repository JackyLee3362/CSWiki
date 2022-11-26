#include<iostream>
#include<string>
using namespace std;
int dirc[8][2] = {
	{1,2},{2,1},{2,-1},{1,-2},
	{-1,-2},{-2,-1},{-2,1},{-1,2}
};
bool visit[26][26];
int p,q,cnt;
string s;
int path[1000][2];
void printchess(){
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q;j++)
			cout << visit[i][j];
		cout << endl;	
	}
	cout << endl;
}
bool dfs(int x, int y, string s){
	if(cnt == p*q){
		cout << s << endl;
		return true;
	}
	visit[x][y] = true;
	for(int i = 0; i < 8; i++){
		int tx = x + dirc[i][0];
		int ty = y + dirc[i][1];
		if(tx < 0 || ty < 0 || tx >= p || ty >= q)
			continue;
		else if(visit[tx][ty] == false){
			cnt++;
			cout << ">>>>>>>>>>>go furter -----------------------------" <<endl;
			printchess();
			char a = ty + 'A';
			char b = tx + '1';
			if(dfs(tx,ty, s+a+b))
				return true;
		}
	}
	visit[x][y] = false;
	cout << "<<<<<<<<< go back" << endl;
	printchess();
	cnt--;
	return false;
}
int main(){
	int N;
	while(cin >> N){
		for(int i = 0; i < N; i++){
			cin >> p >> q;		
			for(int i = 0; i < p; i++)
				for(int j = 0; j < q; j++)
					visit[i][j] = false;
			s.clear();
			cnt = 1;
			int su=	dfs(0,0,"A1");
			cout << su << endl;	
		}
	}
}
