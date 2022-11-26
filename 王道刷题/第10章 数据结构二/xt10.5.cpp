#include <iostream>
#include <string>
#include <map>
#include <cstdio>

using namespace std;

int main(){
	int n;
	string str;
	cin >> n;
	map<int,string> mpin,mpout;
	while(n--){
		cin >> str;
		int h,m,s;
		scanf("%d:%d:%d",&h,&m,&s);
		mpin.insert(pair<int,string>(h*10000+m*100+s,str));
		scanf("%d:%d:%d",&h,&m,&s);
		mpout.insert(pair<int,string>(h*10000+m*100+s,str));
	}
	cout << mpin.begin()->second << ' ' << (--mpout.end())->second << endl;
}
