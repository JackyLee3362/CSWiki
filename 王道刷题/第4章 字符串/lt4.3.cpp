#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	while(getline(cin, s)){
		if( s == "ENDOFINPUT") 
			break;
		getline(cin,s);
		for(string::iterator it = s.begin(); it != s.end(); it++)
			if( *it >= 'A' && *it <= 'Z')
				*it = ((*it - 'A') + 21 ) % 26 + 'A';
		cout << s << endl;
		getline(cin,s);
	}
		return 0;
}

