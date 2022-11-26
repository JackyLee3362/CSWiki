#include <iostream>
#include <map>
#include <string>
using namespace std;
typedef map<char, pair<char,char>> rel;
int find(rel mp, char c, char parent, int depth){
	int ld,rd;
	if(mp[c].first == parent||mp[c].second == parent) return depth;
	else if(mp[c].first == 0 && mp[c].second == 0) return -1;
	else if(mp[c].first == 0)
		rd = find(mp, mp[c].second, parent, depth+1);
	else if(mp[c].second == 0)
		ld = find(mp, mp[c].first, parent, depth+1);
	else{
		ld = find(mp, mp[c].first, parent, depth+1);
		rd = find(mp, mp[c].second, parent, depth+1);
	}
	return ld>rd?ld:rd;
}
int main(){
	int N,M,cnt=1;
	string str;
	rel mp;
	while(cin >> N >> M){
		cnt=1;
		while(N--){
			cin >> str;
			if(str[1] == '-') str[1] = cnt++;
			if(str[2] == '-') str[2] = cnt++;
			pair<char,char> pc(str[1],str[2]);
			mp[str[0]] = pc;
		}
		while(M--){
			cin >> str;
			int d1 = find(mp,str[0],str[1],0);
			int d2 = find(mp, str[1], str[0], 0);
			string s;
			if(d1>d2){
				s = "child";
				d2 = d1;
			}
			else{
				s = "parent";
			}
			if(d1==-1 && d2==-1) cout << '-' << endl;
			else{
				for(int i = 0; i < d2; i++){
					if(i==0) s.insert(0,"grand");
					else s.insert(0,"great-");
				}
				cout << s << endl;
			}		
		}
	}
}
