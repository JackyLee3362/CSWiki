#include <iostream>
#include <new>
#include <string>

using namespace std;
struct bitree{
	char c;
	bitree* left, *right;
	bitree(char a):c(a),left(NULL),right(NULL){}
};
bitree* buildtree(bitree* root, char c){
	if(root == NULL)
		root = new bitree(c);
	else if(c < root->c)
		root->left = buildtree(root->left,c);
	else 
		root->right = buildtree(root->right,c);
	return root;
}
void comp(bitree* root1, bitree* root2, bool& flag){
	if(root1 == NULL && root2 == NULL) return;
	else if(root1 == NULL && root2 != NULL){
		flag = false;
		return;
	}
	else if(root1 != NULL && root2 == NULL){
		flag = false;
		return;
	}
	if(root1->c == root2->c){
		comp(root1->left, root2->left, flag);
		comp(root1->right, root2->right, flag);
	}
	else{
		flag = false;
		return;
	}
	return;
}
int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		string s;
		cin >> s;
		bitree* root = NULL;
		for(int i = 0; i < s.size(); i++)
			root = buildtree(root, s[i]);	
		while(n--){
			string s2;
			cin >> s2;
			if(s.size() != s2.size()){
				cout <<"NO" << endl;
				continue;
			}
			bitree* root2 = NULL;
			for(int i = 0; i < s2.size(); i++)
				root2 = buildtree(root2, s2[i]);
			bool flag = true;
			comp(root,root2,flag);
			if(flag) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
