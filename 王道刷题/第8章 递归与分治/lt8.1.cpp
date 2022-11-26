#include<iostream>

using namespace std;
long long func(long long n){
	if(n == 1) return 1;
	else
		return n * func(n-1);
}
int main(){
	long long n;
	cin >> n;
	cout << func(n) << endl;
	
	return 0;
}
