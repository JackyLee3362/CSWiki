#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
	int num;
	int a[100];
	while(cin >> num){
		for(int i = 0; i < num; i++)
			cin >> a[i];
		sort(a,a+num);
		for(int i = 0; i < num; i++)
			cout << a[i] << ' ';
		cout << endl;
	}
	return 0;
}
