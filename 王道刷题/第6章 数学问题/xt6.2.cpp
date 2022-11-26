#include<iostream>
using namespace std;

void change(unsigned long C, int m){
	if(C == 0) return;
	else{
		change(C / m, m);
		cout << C % m;
	}
}

int main(){
	unsigned int m,A,B;
	while(cin >> m >> A >> B){
		unsigned long C = A + B;
		if(C == 0){
			cout << 0 << endl;
			continue;
		}
		change(C, m);
		cout << endl;
	}
	return 0;
}
