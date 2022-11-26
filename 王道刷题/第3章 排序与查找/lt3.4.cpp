#include<iostream>

using namespace std;

int main(){
	int n,a[201],x;
	while(cin >> n){
		for(int i = 0; i < n; i++)
			cin >> a[i];
		cin >> x;
		int sum = -1;
		for(int i = 0; i < n; i++)
			if(a[i] == x) {
				sum = i;
				cout << sum << endl;
			}
		if(sum == -1) cout << sum << endl;
	}
	return 0;
}
		
