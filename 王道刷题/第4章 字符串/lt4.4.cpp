#include <iostream>
#include <string>

using namespace std;

int main(){
	string a,b;
	while(getline(cin, a)){
		if(a == "#") break;
		int f[5] = {0};
		getline(cin,b);
		for(int i = 0; i < a.size(); i++)
			for(int j = 0; j < b.size(); j++)
				if(a[i] == b[j]) f[i]++;
		for(int i = 0; i < a.size(); i++)
			cout << a[i] << ' ' << f[i] << endl;
	}
	return 0;
}
