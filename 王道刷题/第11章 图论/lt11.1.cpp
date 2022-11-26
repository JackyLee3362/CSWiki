#include <iostream>

using namespace std;

class UF{
	public:
		int uf[1000],n,cnt;
		UF(int n):n(n),cnt(n){
			for(int i = 0; i < n; i++){
				uf[i] = i;
			}
		}
	public:
		int findFa(int x){
			if(x!=uf[x])
				x = findFa(uf[x]);
			return x;
		}
		void unite(int x, int y){
			int yf = findFa(y);
			if(findFa(x)!=yf){
				uf[yf] = x;
				cnt--;
			}
		}
};

int main(){
	int n, m;
	while(cin >> n >> m){
		UF uf(n);	
		while(m--){
			int a,b;
			cin >> a >> b;
			uf.unite(a-1,b-1);
		}
		cout << uf.cnt-1 << endl;
	}
}
