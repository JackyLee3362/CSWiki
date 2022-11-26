#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(),a.end());
		if(n == 1) cout << "-1"; 
		cout << a[n-1] << endl;
		for(int i = 0; i < n-1; i++)
			cout << a[i] << ' ';
		cout << endl;
		}
	return 0;
}
		
