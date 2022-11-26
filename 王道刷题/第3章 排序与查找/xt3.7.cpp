#include<iostream>
#include<string>
#include<cstdio>

const int N = 1000;

using namespace std;
int main(){
	string s;
	while(cin >> s){
		// initialize next array
		int next[N];
		bool isOut[N] = {false};
		for(int i = 0; i < s.size(); i++)
			next[i] = -1;
		// construct next array
		for(int i = 0; i < s.size(); i++)
			for(int j = i+1; j < s.size(); j++)
				if(s[j] == s[i]){
					next[i] = j;
					break;
				}
		// print output;
		for(int i = 0; i < s.size(); i++)
			if(next[i] > 0 && isOut[i] == false){
				for(int j = i;j < s.size(); j = next[j]){
					cout << s[i] << ':' << j ;
					isOut[j] = true;
					if(next[j] < s.size()) cout << ',';
				}
			cout << endl;
			}		
	}
	return 0;
}
