#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
	string str;
	while(getline(cin, str)){
		int sum = 0;
		for(int i = 0; i < str.size(); i++){
			int n = str[i] - '0';
			sum += n * (pow(2, str.size() - i) - 1);
		}
		cout << sum << endl;
	}
	return 0;
}
