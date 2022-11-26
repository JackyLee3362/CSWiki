#include<iostream>
#include<math.h>
#include<string>
#include<stack>
#include<queue>
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
void mulstring(string &s, string &answer){
	bool next = 0;
	int j = 0 , k = 0;
	for(int i = 0; i < s.size(); i++){
		// initial condition
		if(answer.size() == 0){
			answer.insert(answer.begin(),s[i]);
			continue;
		}
		// string * 2
		for(int p = answer.size() - 1, next = 0; p >= 0 ; p--){
			k = answer[p] - '0';
			k = k * 2 + next;
			next = k / 10;
			k = k % 10;
			answer[p] = k + '0';
			if( p == 0 && next == 1 )
				answer.insert(answer.begin(),'1');
		}
		// a[begin]
		j = s[i] - '0';

		// string + a[begin]
		for(int p = answer.size() - 1, next = 0; p >= 0; p--){
			k = answer[p] - '0' + next;
			if(p == answer.size() - 1) k += j;
			next = k / 10;
			k = k % 10;
			answer[p] = k + '0';
		}
	}
}
int main(){
	string s,a,answer;
	stack<bool> b;
	char c;
	while(cin >> s){
		// 10 to 2
		if(s.size() == 1 && s[0] == '0'){
			cout << 0 << endl;
			continue;
		}
		while(!s.empty())
			b.push(getModel(s));
		// 2 inverse

		b.pop();
		while(!b.empty()){
			a.insert(a.begin(),b.top()+'0');
			b.pop();
		}
		// 2 to 10
		mulstring(a, answer);
		cout << answer << endl; // print 10(inverse)
		answer.clear();
		a.clear();
	}

	return 0;
}


