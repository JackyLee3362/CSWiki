#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, a;
	while(cin >> n){
		int weight = 0;
		priority_queue<int, vector<int>, greater<int>> pq;
		while(n--){
			cin >> a;
			pq.push(a);
		}
		while(pq.size()!=1){
			int x = pq.top();
			pq.pop();
			int y = pq.top();
			pq.pop();
			int z = x+y;
			weight += z;
			pq.push(z);
		}
		cout << weight << endl;
	}
}

