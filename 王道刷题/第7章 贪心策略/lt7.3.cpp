#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int N = 100;
int main(){
	int n, m;
	while(cin>>n){
		int a[N] = {0},b[N] = {0};
		for(int i = 0; i < n; i++)
			cin >> a[i] >> b[i];
		sort(a,a+n,greater());
		sort(b,b+n,greater());
		
	}		
	return 0;
}
