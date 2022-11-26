#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char* argv[]){
	int L,M,sum = 0;
	bool T[10000];
	cin >> L >> M;
	for(int i = 0; i <= L; i++)
		T[i] = true;
	while(M){
		int a,b;
		cin >> a >> b;
		for(int i = a; i <= b; i++)
			T[i] = false;
		M--;
	}
	for(int i = 0; i <= L; i++)
		if(T[i] == true) sum++;

	cout << sum <<endl;

	return 0;
}
