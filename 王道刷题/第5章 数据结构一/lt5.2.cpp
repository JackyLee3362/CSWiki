#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> q;
	vector<int> v;
	int total_n = 8, count_m = 3, from_p = 3;
	for(int i = 0; i < total_n; i++)
		v.push_back(i);
	int i = (count_m + from_p) % total_n;
	while(1){
		int j = v[i];
		q.push(j);
		v.erase(v.begin()+i);
		if(v.empty()) break;
		i = (i + count_m) % v.size();
	}
	while(!q.empty()){
		int j = q.front();
		q.pop();
		if(j == 0) j += total_n;
		cout << j << ",";
	}
	return 0;
}
