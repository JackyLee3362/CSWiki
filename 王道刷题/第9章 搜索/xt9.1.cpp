#include<iostream>
#include<queue>
#include<string>
#include<map>

using namespace std;

int bfs(string s){
	int cnt = 0;
	map<string, int> mp;
	queue<string> qu;
	qu.push(s);
	mp[s] = 0;
	while(!qu.empty()){
		string ts = qu.front();
		qu.pop();
		if(ts.find("2012") != -1) return mp[ts];
		for(int i = 0; i < s.size() - 1; i++){
			string ts2 = ts;
			swap(ts[i], ts[i+1]);
			if(mp.find(ts) == mp.end()){
				mp[ts] = mp[ts2] + 1;
				qu.push(ts);
			}
			swap(ts[i], ts[i+1]);
		}
		cnt++;
	}
	return -1;
}

int main(){
	string s;
	int N;
	while(cin >> N >> s)
		cout << bfs(s) << endl;
	return 0;
}
