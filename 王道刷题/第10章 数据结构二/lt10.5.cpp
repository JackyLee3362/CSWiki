#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>
using namespace std;

class node{
	public:
	int x,y,z;
	node(int x, int y):x(x),y(y){
		z = x*x+y*y;
	}
};

class comp{
	public:
		bool operator() (const node& lhs, const node& rhs){
			if(lhs.z > rhs.z)
				return false;
			else if(lhs.z == rhs.z && lhs.y < rhs.y) 
				return false;
			return true;
		}
};
void instructor(string s, priority_queue<node, vector<node>, comp>& pq){
	if(s == "Pop"){
		if(pq.empty()){
			cout << "empty" << endl;
		}
		else{
			printf("%d+i%d\n",pq.top().x,pq.top().y);
			pq.pop();
			cout << "SIZE = " << pq.size() << endl;
		}
	}
	else if(s == "Insert"){
		int a,b;
		scanf("%d+i%d", &a, &b);
		node num(a,b);
		pq.push(num);
		cout << "SIZE = " << pq.size() << endl;
	}
}
int main(){
	int N;
	while(cin >> N){
		priority_queue<node, vector<node>, comp> pq;
		for(int i = 0; i < N; i++){
			string s;
			cin >> s;
			instructor(s, pq);
		}
		// cout << "================" << endl;
	}
	return 0;
}
