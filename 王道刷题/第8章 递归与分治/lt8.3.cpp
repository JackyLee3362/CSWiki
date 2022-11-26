#include<iostream>

using namespace std;

int f(int a){
	if(a == 0) return 0;
	else if(a == 1) return 1;
	else
		return f(a-1) + f(a-2);
}

int main(){
	int n;
	cin >> n;
	cout << f(n) << endl;
}
