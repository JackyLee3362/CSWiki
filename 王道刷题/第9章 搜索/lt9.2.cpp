#include<iostream>
#include<queue>
#define TEST 1
using namespace std;

long long bfs(int n){
	queue<long long> q;
	q.push(1);
	while(q.front() % n){
		long long k = q.front();
		q.push(10*k);
		q.push(10*k+1);
		q.pop();
	}
	return q.front();
}

int main(){
	int m;
	while(cin >> m){
		if(m == 0) break;
		cout << bfs(m) << endl;
	}
	return 0;
}
