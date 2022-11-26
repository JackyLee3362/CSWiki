#include<iostream>
#include<string>

using namespace std;

int main(){
	bool f[100]; 
	for(int i = 0; i < 100; i++)
		cout << f[i] << ' ';
	cout << endl;
	cout << sizeof(f[0]) << endl;
}
