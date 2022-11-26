#include<iostream>
#include<cmath>

using namespace std;
void f(int n){
	if(n == 1){
		cout << "2(0)";
		return;
	}
	int m = log2(n);
	int r = n - pow(2, m);
	cout << "2(";
	f(m);
	cout << ')';
	if(r>0){
		cout << '+';
		f(r);
	}
}
int main(){
	int n;
	while(cin >> n){
		f(n);
	}
}
