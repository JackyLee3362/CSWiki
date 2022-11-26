#include <iostream>
#include <string>

using namespace std;

bool isWord(char c){
	if(c != ' ' && c != '\t' && c != '\r' && c != '\n') return true;
	return false;
}

int main(){
	string s;
	while(getline(cin, s)){
		int flag = 0;
		for(int i = 0; i < s.size(); i++)
			if(flag == 0 && isWord(s[i])){
				if(s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 'a' + 'A';
				flag = 1;
			}
			else if(flag == 1 && !isWord(s[i]))
				flag = 0;
		cout << s << endl;
	}
	return 0;
}
