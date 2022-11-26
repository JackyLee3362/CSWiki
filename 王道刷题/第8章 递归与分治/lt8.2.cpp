#include<iostream>

using namespace std;

long long func(long n){
	if(n == 1) return 2;
	else
		return 2 + 3 * func(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << func(n) << endl;
}
