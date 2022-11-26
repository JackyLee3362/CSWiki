#include<iostream>
#include<string>

using namespace std;

int main(){
	string a;
	while(cin >> a){
		for(string::iterator it = a.begin(); it != a.end(); it++)
			if( *it >= 'a' &&  *it <= 'z' )
				*it = ((*it - 'a') + 1) % 26 + 'a';
			else if( *it >= 'A' && *it <= 'Z' )
				*it = (( *it - 'A' ) + 1 ) % 26 + 'A';
		cout << a << ' ';
	}
	return 0;
}
