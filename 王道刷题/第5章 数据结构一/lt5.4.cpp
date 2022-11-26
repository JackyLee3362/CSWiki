#include<iostream>
#include<stack>

using namespace std;

int main(){
	long long n;
	stack<int> s;

	cin >> n;
	for(long long i = 0; i < n; i++){
		int j;
		cin >> j;
		s.push(j);
	}
	while(!s.empty()){
		int j;
		j = s.top();
		cout << j << ' ';
		s.pop();
	}
	return 0;
}
