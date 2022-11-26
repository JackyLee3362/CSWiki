#include <iostream>
#include <string>
#include <new>
using namespace std;
string t1,t2;
class node{
	public:
	char c;
	node* left, *right;
	node(char ch){
		c = ch;
		left = nullptr;
		right = nullptr;
	}
	void printPostOrder(){
		if(left) left->printPostOrder();
		if(right) right->printPostOrder();
		cout << c;
	}
};
node* func(int i, int lj, int rj){
	node* T = new node(t1[i]);
	if(lj == rj)
		return T;
	else if(lj > rj)
		return nullptr;
	int j = t2.find(t1[i]);
	T->left = func(i+1,lj,j-1);
	T->right = func(i+j+1-lj,j+1,rj);
	return T;
}
int main(){
	while(cin >> t1 >> t2){
		node *root = func(0,0,t1.size()-1);
		root->printPostOrder();
		cout << endl;
		t1.clear();
		t2.clear();
	}
	return 0;
}
