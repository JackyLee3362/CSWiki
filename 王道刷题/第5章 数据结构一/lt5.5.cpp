#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
	char n[2] = {'(',')'};
	string s;
	stack<char> stack;
	cin >> s;
	string answer(s.size(),' ');
	for(int i = 0; i < s.size(); i++)
		if(s[i] == '(') stack.push(s[i]);
		else if(s[i] == ')')
			if(stack.empty()) answer[i] = '?';
			else stack.pop();
	
	for(int i = s.size()-1;!stack.empty();i-- ){
		if(s[i] == '('){
			answer[i] = '$';
			stack.pop();
		}
	}
	cout << s << endl;
	cout << answer << endl;
	return 0;
}
