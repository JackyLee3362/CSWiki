#include<iostream>
#include<string>

using namespace std;

void strmul16(string &d){
	int carry = 0;
	for(int i = d.size() - 1; i >= 0; i--){
		int j = (d[i] - '0') * 16 + carry;
		d[i] = j % 10 + '0';
		carry = j / 10;
	}
	if(carry != 0)
		d.insert(d.begin(),carry+'0');
}

void stradd(string &d, int n){
	int carry = n;
	for(int i = d.size() - 1; i >= 0; i--){
		int j = d[i] - '0' + carry;
		d[i] = j % 10 + '0';
		carry = j / 10;
	}

	if(carry < 10 && carry > 0 ) 
		d.insert(d.begin(), carry+'0');
	else if(carry >= 10){
		d.insert(d.begin(), carry%10 + '0');
		d.insert(d.begin(), carry/10 + '0');
	}

}

int main(){
	string s;
	while(cin >> s){
		string d;

		int carry = 0;
		int j = 0;
		long long k = 0;
		for(int i = 0; i < s.size() ; i++){
			strmul16(d);
			if(s[i] >= '0' && s[i] <= '9'){
				j = s[i] - '0' + carry;
			}
			else if(s[i] >= 'a' && s[i] <= 'z'){
				j = s[i] - 'a' + 10 + carry;
			}
			else if(s[i] >= 'A' && s[i] <= 'Z'){
				j = s[i] - 'A' + 10 + carry;
			}
			stradd(d, j);
			j = j % 10;
			carry = j / 10;
			if(i == s.size() - 1 && carry > 0) d.insert(d.begin(), carry + '0');
		}
		cout << d << endl;
		d.clear();
	}
	return 0;
}
