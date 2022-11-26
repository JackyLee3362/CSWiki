#include<iostream>
#include<string>

using namespace std;

int main(){
	string s;
	while(getline(cin, s)){
		int f[26] = {0};
		for(int i = 0; i < s.size(); i++)
			if( s[i] >= 'A' && s[i] <= 'Z')
				f[s[i] - 'A']++;
		for(int i = 0; i < 26; i++)
			cout << char(i + 'A') << ':' << f[i] << endl;
	}
	return 0;
}
				
