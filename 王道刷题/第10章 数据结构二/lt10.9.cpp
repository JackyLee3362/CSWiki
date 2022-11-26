#include <iostream>
#include <map>

using namespace std;

int main(){
	string str;
	while(cin>>str){
		map<string,int> mp;
		for(int i = 0; i < str.size(); i++)
			for(int j = 0; j < str.size()-i; j++){
				mp[str.substr(i,j+1)]++;
				// cout << subs << endl;
			}
		for(map<string,int>::iterator it=mp.begin(); it!=mp.end();it++){
			if(it->second > 1) cout << it->first << ' ' << it->second << endl;
		}
	}
}
