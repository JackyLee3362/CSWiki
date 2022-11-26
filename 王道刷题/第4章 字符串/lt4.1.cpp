#include<iostream>
#include<string>

using namespace std;

int main(){
	string a,b;
	while(cin >> a >> b){
		int sum = 0;
		for(int i = 0; i < a.size(); i++)
			for(int j = 0; j < b.size(); j++)
				sum += (int)(a[i] - '0') * (int)(b[j] - '0');
		cout << sum << endl;
	}
	return 0;
}

