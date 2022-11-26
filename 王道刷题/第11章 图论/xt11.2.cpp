#include <iostream>
#include <map>
#include <set>
using namespace std;
class UF{
	public:
	map<int, int> uf;
	inline void insert(int n,int m){
		if(uf[n] == 0) uf[n] = n;
		if(uf[m] == 0) uf[m] = m;
	}
	inline int findFa(int n){
		if(n != uf[n])
			n = findFa(uf[n]);
		return n;
	}
	inline void unite(int x, int y){
		int fy = findFa(y);
		if(findFa(x) != fy)
			uf[fy] = x;
	}
};

int main(){
	int a,b;
	UF uf;
	while(cin >> a >> b){
		uf.insert(a,b);
		uf.unite(a,b);
	}
	set<int> st;
	for(auto i:uf.uf)
		st.insert(uf.findFa(i.second));
	cout << st.size() << endl;
	
}
