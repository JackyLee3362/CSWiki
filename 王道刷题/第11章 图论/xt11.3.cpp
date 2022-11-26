#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;
class UF{
	public:
	map<string, string> pp;
	map<string, int> time;
	void insert(string p1, string p2, int t){
		if(time[p1] == 0){
			pp[p1] = p1;
			time[p1] = 0;
		}
		if(time[p2] == 0){
			pp[p2] = p2;
			time[p2] = 0;
		}
		time[p1] += t;
		time[p2] += t;
	}
	string findFa(string s){
		if(s!=pp[s])
			s = findFa(pp[s]);
		return s;
	}
	void Union(string s1, string s2){
		if(findFa(s1) != findFa(s2))
			pp[s2] = s1;		
	}
};
int main(){
	int N,K,t;
	string s1, s2;
	while(cin >> N >> K){
		UF uf;
		while(N--){
			cin >> s1 >> s2 >> t;
			uf.insert(s1,s2,t);
			uf.Union(s1,s2);
		}
		cout << "-----------------k is " << K << endl;
		map<string, int> gangnum;
		map<string, string> headname;
		map<string, int> maxtime;
		for(auto it:uf.pp){
			string name = uf.findFa(it.second);
			it.second = name;
			gangnum[name]++;
			headname[name] = name;
			maxtime[name] = uf.time[name];
			cout << it.first << " -> " << it.second << endl;
		}
		for(auto it:uf.pp){
			string name = it.second;
			if(maxtime[name] < uf.time[it.second]){
				headname[name] = it.first;
				maxtime[name] = uf.time[name];
			}
		}
		map<string, int> result;
		cout << "maxtime" << endl;
		for(auto it:maxtime){
			if(it.second >= K){
				result[it.first] = it.second;
			}
			cout << it.first << ' ' << it.second << endl;
		}
		map<string, int> result_final;
		for(auto it:result){
			if(gangnum[it.first] > 2)
				result_final[it.first] = gangnum[it.first];
		}
		cout << result_final.size() << endl;
		for(auto it:result_final){
			cout << it.first << ' ' << it.second << endl;
		}

	}


	return 0;
}
