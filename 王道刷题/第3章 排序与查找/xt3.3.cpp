#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
const int N = 101;
struct mouse{
	int weight;
	string hat;
};

bool cmp(const mouse &a, const mouse &b){
	if(a.weight > b.weight) return true;
	return false;
}

int main(){
	int n;
	vector<mouse> a(N);
	while(cin >> n){
		for(int i = 0; i < n; i++)
			cin >> a[i].weight >> a[i].hat;
		sort(a.begin(),a.end(),cmp);
		for(int i = 0; i < n; i++)
			cout << a[i].weight << ' ' <<  a[i].hat << endl;
	}//while
	return 0;
}

