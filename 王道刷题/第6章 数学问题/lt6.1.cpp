#include<iostream>
#include<stack>

using namespace std;

int main(){
	unsigned int n;
	while(cin >> n){
		stack<bool> b;
		while(n){
			b.push(n%2);
			n /= 2;
		}
		while(!b.empty()){
			cout << b.top();
			b.pop();
		}
		cout << endl;
	}
	return 0;
}
