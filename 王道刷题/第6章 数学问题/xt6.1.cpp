#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		stack<char> s;
		while(n){
			int k = n % 8;
			n = n / 8;
			s.push(k+'0');
		}
		while(!s.empty()){
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
	return 0;
}
