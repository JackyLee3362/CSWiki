#include<iostream>
#include<cstdio>

using namespace std;

int Reverse(int x){
	int sum = 0;
	while(x != 0){
		sum *= 10;
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main(){
	for(int i = 1000; i < 2000;i++)
		if(i * 9 == Reverse(i))
			cout << i << endl;
	return 0;
}
