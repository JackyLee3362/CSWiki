#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char* argv[]){
	int n, num;
	while(cin >> n){
		num = 0;
		while(n > 1){
			if( n%2 == 0)  n = n/2;
	       		else n = (3*n+1)/2;
			num++;
		}
		if( n == 0) return 0;
		cout << num << endl;
	}		 	
	return 0;
}

