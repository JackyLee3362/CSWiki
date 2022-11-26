#include<iostream>
#include<queue>
// #define _TEST 1
using namespace std;
struct Node{
	int time;
	int location;
};
int bfs(Node f,int c){
	queue<Node> q;
	int i = 0;
	q.push(f);
	while(q.front().location != c){
		Node tmp;
		tmp.time = q.front().time + 1;
		tmp.location = q.front().location + 1;
		q.push(tmp);
		tmp.location = q.front().location - 1;
		q.push(tmp);
		tmp.location = q.front().location * 2;
		q.push(tmp);
		q.pop();
#ifdef _TEST
		cout << "test line " << i << endl;
		i++;
#endif
	}
	return q.front().time;
}
int main(){
	int farmer, cow;
	cin >> farmer >> cow;
	queue<int> q;
#ifdef _TEST
	cout << "farmer is at " << farmer << endl;
	cout << "cow is at " << cow << endl;
#endif
	Node f;
	f.time = 0;
	f.location = farmer;
	cout << bfs(f, cow) << endl;
	return 0;
}
