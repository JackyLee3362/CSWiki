#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int N = 1000;

int main(){
	string s;
	while(cin >> s){
		// initialize next array
		int next[N];
		bool isout[N] = {false};
		int f[26] = {0};

		for(int i = 0; i < s.size(); i++)
			next[i] = -1;
		// construct next array
		for(int i = 0; i < s.size(); i++){
			f[i] = s.find(i+'a');
			for(int j = i+1; j < s.size(); j++)
				if(s[j] == s[i]){
					next[i] = j;
					break;
				}
		}
		// print output;
		for(int i = 0; i < 26; i++)
			if(f[i] >= 0)
				for(int j = f[i]; j > 0; j = next[j])
					cout << s.substr(j, s.size() - j) << endl;
	}
	return 0;
}//main

