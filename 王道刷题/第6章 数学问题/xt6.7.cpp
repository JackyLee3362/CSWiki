#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N;
	long n[1001];
	while(cin >> N){
		for(int i = 0; i < N; i++)
			cin >> n[i];
		for(int i = 0; i < N; i++){	
			int s = sqrt(n[i]), sum = 0;
			for(int j = 1; j <= s; j++)
				if(n[i] % j == 0) sum += 2;
			if(n[i] == s * s) sum--;
			cout << sum << endl;
		}
	}
	return 0;
}
