#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

const int NMAX = 1000000;
const int MMAX = 10000;

void getNextJArray(int* T, int *next, int n){
	//initialize 
	for(int i = 0; i < n; i++)
		next[i] = 0;
	next[1] = 1;
	int i = 1; 
	int j = 0;
	while(j < n){
		if(T[i] == T[j]){
			i++;j++;
			next[i] = j;
		}
		else
			j = next[j];
	}//while
}	

int main(){
	int c, N, M;
	string t,m,MN;
	cin >> c;
	getchar();
	for(int ci = 0; ci < c; ci++){
		// input 
		// cin >> N >> M;
		getline(cin, MN);
		getline(cin, t);
		getline(cin, m);
		int K = t.find(m);
		cout << "ci=" << ci << endl;
		cout << "MN=" << MN << endl;
		cout << "t=" << t << endl;
		cout << "m=" << m << endl;
		if(K >= 0) K = K / 2 + 1;
		cout << "K=" << K << endl;
	}
	return 0;
}
