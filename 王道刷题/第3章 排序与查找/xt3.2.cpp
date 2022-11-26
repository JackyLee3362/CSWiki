#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(const int &a, const int &b){
	int i = a%2, j=b%2;
	if(i+j==2) return a > b; //both a b are odd
	else if(i+j==0) return a < b; // both a b are even
	else if(i>j) return true;
	return false;
}


int main(){
	vector<int> a(10);
	while(cin >> a[0]){
		for(int i = 1; i < 10; i++)
			cin >> a[i];
		sort(a.begin(),a.end(),cmp);
		for(int i = 0; i < 10; i++)
			cout << a[i] << ' ';
		cout << endl;
	}
	return 0;
}
