#include <iostream>
#include <map>
using namespace std;
int main(){
	int lhs,rhs,cnt=0;
	while(cin >> lhs >> rhs){
		if(lhs == -1) break;
		else if(lhs == 0){
			cout << "Case " << ++cnt << " is a tree." << endl;
			continue;
		}
		map<int, int> mp;
		bool flag = 1;
		do{
			if(mp[rhs] == 0 )
				mp[rhs] = lhs;
			else 
				flag = false;
			if(mp.find(lhs) == mp.end() )
				mp[lhs] = 0;
			cin >> lhs >> rhs;
		}while(lhs!=0);
		cnt++;
		if(mp.size() == 1) flag = false;
		if(flag == true){
			int cnt0 = 0;
			for(auto it : mp)
				if(it.second == 0)	cnt0++;
			if(cnt0 == 1) cout << "Case " << cnt << " is a tree." << endl;
			else cout << "Case " << cnt << " is not a tree." << endl;
		}
		else cout << "Case " << cnt << " is not a tree." << endl;
	}
}
