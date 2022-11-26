#include <iostream>
#include <string>

using namespace std;

int main(){
	string t,m;
	while(getline(cin, t)){
	getline(cin, m);
	cout << t << endl << m << endl;
	int pos = 0, count = 0;
	while((pos = t.find(m,pos)) != string::npos){
		count++;
		pos++;
	}
	cout << count << endl;}
	return 0;
}
