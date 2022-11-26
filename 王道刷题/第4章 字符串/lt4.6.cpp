#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

const int NMAX = 1000000;
const int MMAX = 10000;

int main(){
	int t[NMAX], m[MMAX], c, N, M;
	cin >> c;
	for(int ci = 0; ci < c; ci++){
		// input 
		cin >> N >> M;
		for(int i = 0; i < N; i++)
			cin >> t[i];
		for(int i = 0; i < M; i++)
			cin >> m[i];
		// find K
		int K = -1;
		for(int i = 0; i <= N - M; i++){
			for(int j = 0, k = i; j <= M; j++,k++)
				if(j == M) {K = i+1; break;}
				else if(t[k] != m[j]){
					// printf("t[%d] = %d not equal m[%d] = %d\n",k,t[k],j,m[j]);
					break;
					}
				// else printf("t[%d] = %d equal m[%d] = %d\n",k,t[k],j,m[j]);
			if( K >= 0) break;
		}
		cout << K << endl;

		// debug
		// for(int i = 0; i < N; i++) cout << t[i] << ' ';
		// cout << endl;
		// for(int i = 0; i < M; i++) cout << m[i] << ' ';
		// cout << endl;
			
	}
	return 0;
}
