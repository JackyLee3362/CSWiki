#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if( n % 2 == 1 )
			cout << "0 0"<< endl;
		else if(n % 4 == 0)
			cout << n / 4 << ' ' << n / 2 << endl;
		else
			cout << n / 4 + 1 << ' ' << n / 2 << endl;
	}
	return 0;
}
