#include <iostream>
using namespace std;
struct node{
	int n;
	node* left,*right;
	node(int m){
		n = m;
		left = nullptr;
		right = nullptr;
	}
};
void preOrder(node* T){
	if(T!=NULL){
		cout << T->n << ' ';
		preOrder(T->left);
		preOrder(T->right);
	}
}
void inOrder(node* T){
	if(T!=NULL){
		inOrder(T->left);
		cout << T->n << ' ';
		inOrder(T->right);
	}
}
void postOrder(node* T){
	if(T!=NULL){
		postOrder(T->left);
		postOrder(T->right);
		cout << T->n << ' ';
	}
}
	

node* BST(node* T, int k){
	node* tmp = new node(k);
	if(T == nullptr)return tmp;
	if(T->n > k)
		if(T->left) BST(T->left,k);
		else T->left = tmp;
	else if(T->n < k)
		if(T->right) BST(T->right, k);
		else T->right = tmp;
	return nullptr;
}
int main(){
	int N, n;
	while(cin >> N){
		cin >> n;
		node* root = BST(nullptr, n);
		for(int i = 0; i < N-1; i++){
			cin >> n;
			BST(root, n);
		}
		preOrder(root);
		cout << endl;

		inOrder(root);
		cout << endl;
		
		postOrder(root);
		cout << endl;
	}
	return 0;
}
