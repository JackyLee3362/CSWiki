#include<iostream>
#include<math.h>
#include<string>
#include<stack>

using namespace std;

bool getModel(string& s){
	bool next = false;
	for(int i = 0; i < s.size(); i++){
		int j;
		if(i == 0)
			if(s[0] > '0' && s[0] <= '9') next = false;
			else s.erase(0,1);
		j = s[i] - '0' + 10 * next;
		s[i] = j/2 + '0';
		next = j % 2;
	}
	return next;
}

using namespace std;

int main(){
	string s;
	stack<bool> b;
	bool bi;
	while(cin >> s){
		if(s.size() == 1 && s[0] == '0'){
			cout << 0 << endl;
			continue;
		}
		while(!s.empty())
			b.push(getModel(s));
		b.pop();
		while(!b.empty()){
			cout << b.top();
			b.pop();
		}
		cout << endl;

	}
	
	return 0;
}
