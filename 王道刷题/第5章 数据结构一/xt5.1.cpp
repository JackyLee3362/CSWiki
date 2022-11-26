#include<iostream>
#include<stack>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	int n,P;
	stack<int> s;
	char c;
	while(cin >> n){
		if(n == 0) break;
		for(int i = 0; i < n; i++){
			cin >> c;
			if(c == 'A'){
				if(!s.empty()) cout << s.top() << endl;
				else cout << 'E' << endl;
			}
			else if(c == 'O' && !s.empty()) s.pop();
			else if(c == 'P'){
				cin >> P;
				s.push(P);
			}
		}
		cout << endl;
		while(!s.empty()) s.pop();
	}
	return 0;
}
