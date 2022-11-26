#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	int n,k;
	string snum,sinput,ssearch;
	map<string, string> mp;
	cin >> n;
	while(n--){
		cin >> snum;
		getline(cin, sinput);
		sinput.insert(0,snum);
		mp[snum] = sinput;
	}
	cin >> k;
	while(k--){
		cin >> ssearch;
		if(mp.find(ssearch) == mp.end()){
			cout << "No Answer!" << endl;
			continue;
		}
		cout << mp[ssearch] << endl;
	}
}
