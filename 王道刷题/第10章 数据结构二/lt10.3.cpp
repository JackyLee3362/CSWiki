#include <iostream>

using namespace std;

class node{
	public:
		int n;
		node* left, *right, *parent;
		node(int num){
			n = num;
			left = nullptr;
			right = nullptr;
		}
};

node* insertNode(node* nd, int k){
	node* tmp = new node(k);
	if(nd == nullptr){
		cout << -1 << endl;
		return tmp;
	}
	if(nd->n > k)
		if(nd->left == nullptr){
			nd->left = tmp;
			cout << nd->n << endl;
		}
		else insertNode(nd->left, k);
	else{
		if(nd->right == nullptr){
			nd->right = tmp;
			cout << nd->n << endl;
		}
		else insertNode(nd->right, k);
	}
	return nullptr;
}


int main(){
	int N,m;
	while(cin >> N){
		cin >> m;
		node* root = insertNode(nullptr, m);
		for(int i = 0; i < N-1; i++){
			cin >> m;
			insertNode(root, m);
		}
	}
}
