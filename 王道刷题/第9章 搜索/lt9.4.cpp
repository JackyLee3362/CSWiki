#include<iostream>

using namespace std;
bool edge[4];
bool visit[20];
bool dfs(int M, int* m, int length, int mn, int en){
	visit[n] = true;	
	return 0;
	
}
int main(){
	int N,M, m[20];
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> M;
		for(int j = 0; j < 4; j++)
			edge = false;
		int total = 0;
		for(int j = 0; j < M; j++){
			cin >> m[j];
			total += m[j];
			visit[j] = false;
		}
		if(total % 4){
			cout << "no" << endl;
			continue;
		}
		int length = total / 4;
		cout << total << length << endl;
	}
	return 0;
}
