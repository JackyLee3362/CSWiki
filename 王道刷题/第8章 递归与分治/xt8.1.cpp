#include<iostream>

using namespace std;

int func(int n, int m){
	if(n==1 || m==1 || m==n+1) return 1;
	else return func(n-1,m-1) + func(n-1,m);
}

int main(){
	int n,m;
	cin >> n >> m;
	cout << func(n, m) << endl;
}
