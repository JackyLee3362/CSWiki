#include<iostream>

using namespace std;

bool minyue1(int a, int b){
	while(a > 0 && b > 0){
		if(a >= b) a = a % b;
		else b = b % a;
	}
	if(max(a,b) == 1) return true;
	return false;
}

int main(){
	int n, N[601];
	while(cin >> n){
		int sum = 0;
		if(n == 0) break;
		for(int i = 0; i < n; i++){
			cin >> N[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++)
				sum += minyue1(N[i], N[j]);
		}
		cout << sum << endl;
	}
	return 0;
}
