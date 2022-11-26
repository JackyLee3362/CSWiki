#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;

int main(){
	stack<char> symbol;
	stack<int> number;
	int n;
	char s;
	while(cin >> n >> s){
		if(number.empty() && n==0 && s== '\n') break;
		else if(s != '\n') {
			symbol.push(s);
			number.push(n);
			cout << number.top();
			continue;
		}
		else if(s == '\n'){
			while(!symbol.empty()) {cout << symbol.top(); symbol.pop();}
			while(!number.empty()) {cout << number.top(); number.pop();}
			
		}
	}
	return 0;
}
