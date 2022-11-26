#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

bool isprime(long n){
	int m = sqrt(n);
	for(int i = 2; i <= m; i++)
		if(n % i == 0) return false;
	return true;
}

int main(){
	long n;
	while(cin >> n){
		int sum = 0;
		while(n > 1){
			for(long i = 2; i <= n; i++){
				bool isp = isprime(i);
				if(isprime(n)) {
					n = 1;
					sum ++;
					break;
				}
				else if(isp && n % i == 0){
					n = n / i;
					sum++;
					break;
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}
