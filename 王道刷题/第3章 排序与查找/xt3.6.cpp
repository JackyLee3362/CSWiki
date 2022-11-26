#include<iostream>

using namespace std;
const int N = 81;
int main(){
	int n,a[N];
	while(cin >> n){
		bool b[N] = {false};
		for(int i = 0; i < n; i++)
			cin >> a[i];
		if(a[0] != a[1]) b[0] = true;
		if(a[n-1] != a[n-2]) b[n-1] = true;
		for(int i = 1; i < n-1; i++)
			if(a[i] > a[i+1] && a[i] > a[i-1])
				b[i] = true;
			else if(a[i] < a[i+1] && a[i] < a[i-1])
				b[i] = true;
		for(int i = 0; i < n; i++)
			if(b[i]) cout << i << ' ';
		cout << endl;
	}
	return 0;
}
			

