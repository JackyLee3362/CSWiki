#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

map<string, bool> proxy;
void reset(){
	for(auto it = proxy.begin(); it != proxy.end(); it++)
		(*it).second = true;
}
bool all_false(){
	for(auto it = proxy.begin(); it != proxy.end(); it++)
		if((*it).second == true) return false;
	return true;
}
int main(){
	int n, m, sum;
	while(cin >> n){
		// input
		sum = 0;
		string tmp;
		for(int i = 0; i < n; i++){
			cin >> tmp;
			proxy[tmp] = true;
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> tmp;
			if(proxy.count(tmp)){
				proxy[tmp] = false;
				if(all_false()){
					sum++;
					reset();
					proxy[tmp] = false;
				}
			}
		}
		if(n == 1 && sum != 0)
			sum = -1;
		cout << sum << endl;
		
	}
	return 0;
}
