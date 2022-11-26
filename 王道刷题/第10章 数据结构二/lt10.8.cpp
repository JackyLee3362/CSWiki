#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){
	map<string,string> mp;
	int n;
	string str1,str2;
	while(getline(cin, str1)){
		if(str1=="@END@")break;
		n = str1.find(']');
		str2 = str1.substr(n+2);
		str1 = str1.substr(0,n+1);
		// cout << str1 << "----" << str2 << endl;
		mp.insert(pair<string,string>(str1,str2));
	}
	cin >> n;
	getchar();
	while(n--){
		getline(cin, str1);
		if(str1[0] == '['){
			if(mp[str1] == "") cout << "what?" << endl;
			else cout << mp[str1] << endl;
		}
		else{
			map<string,string>::iterator it;
			for(it = mp.begin(); it!= mp.end(); it++){
				if(it->second == str1){
					cout << it->first.substr(1,it->first.size()-2) << endl;
					break;
				}
			}
			if(it == mp.end())
				cout << "what?"<<endl;
		}

	}

}
