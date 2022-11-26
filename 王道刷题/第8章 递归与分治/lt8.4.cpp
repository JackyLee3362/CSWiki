#include<iostream>

using namespace std;

void func(int n, int m, int& sum){
	if(2*m>n) return;
	else if(2*m+1>n){
		sum++;
		func(n, 2*m, sum);
	}
	else{
		sum +=2;
		func(n, 2*m, sum);
		func(n, 2*m+1, sum);
	}
}
int main(){
	int n,m;
	while(cin >> m >> n){
		int sum = 1;
		if(n==0 && m==0) break;
		func(n, m, sum);
		cout << sum << endl;
		
	}
}
