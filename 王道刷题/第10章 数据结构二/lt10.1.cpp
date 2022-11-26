#include <iostream>
#include <new>
#include <string>
#define DEBUG 1
using namespace std;
string s;
int n;
class btree{
	public:
	char c;
	btree* left,*right;
	btree(char c1){
		c = c1;
		left = nullptr;
		right = nullptr;
	}
	void inorder(){
		if(left) left->inorder();
		cout << c << ' ';
		if(right) right->inorder();
	}
};
btree* buildT(){
	if(s[n] == '#' || n >= s.size()){
		n++;
		return NULL;
	}
	btree* root = new btree(s[n++]);
	root->left = buildT();
	root->right = buildT();
	return root;
}
void deleteT(btree* T){
	if(T == NULL) return;
	deleteT(T->left);
	deleteT(T->right);
	delete T;
}
int main(){
	while(cin >> s){
		n = 0;
		btree* root;
		root = buildT();
		root->inorder();
		deleteT(root);
		s.clear();		
	}
	return 0;
}
