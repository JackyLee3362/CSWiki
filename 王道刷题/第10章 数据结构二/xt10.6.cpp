#include <iostream>
#include <map>

using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		map<int,int> mp,mb;
		for(int i = 0; i < N; i++){
			int n;
			cin >> n;
			mp[i] = n;
			mb[n]++;
		}
		for(int i = 0; i < N; i++){
			if(mb[mp[i]] == 1) cout << "BeiJu" << endl;
			else cout << mb[mp[i]]-1 << endl;
		}
	}
	
}
