#include <iostream>
#include <string>

using namespace std;
bool isWord(char c){
	if(c >= 'a' && c <= 'z') return true;
	else if(c >= 'A' && c <= 'Z') return true;
	return false;
}

int main(){
	string s, a, b;
	while(getline(cin, s)){
		cin >> a >> b;
		int pos = 0;
		int l = a.size();
		while((pos = s.find(a, pos)) != string::npos){
			if(pos == 0 && !isWord(s[pos+l])){
				s.erase(pos, l);
				s.insert(pos, b);
			}
			else if(pos == s.size() - l && !isWord(s[pos-1])){
				s.erase(pos, l);
				s.insert(pos, b);
			}
			else if(!isWord(s[pos+l]) && !isWord(s[pos-1])){
				s.erase(pos, l);
				s.insert(pos, b);
			}
			pos++;
		}
				
		cout << s << endl;
	}
	return 0;
}

