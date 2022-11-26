#include <iostream>
#include <set>
using namespace std;
int main(){
	int n,m,k;
	while(cin >> n){
		set<int> st;
		for(int i=0; i < n; i++){
			cin >> m;
			st.insert(m);	
		}
		cin >> k;
		set<int>::iterator it = st.begin();
		for(int i = 1; i < k; i++) it++;
		cout << *it << endl;
	}
}
