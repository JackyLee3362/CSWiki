#include <iostream>
#include <map>

using namespace std;

int main(){
	int n,score;
	while(cin >> n){
		if(n==0) break;
		map<int,int> mp;
		while(n--){
			cin >> score;
			mp[score]++;
		}
		cin >> n;
		cout << mp[n] << endl;	

	}

}

