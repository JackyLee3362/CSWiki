#include<iostream>
using namespace std;

int m[20],n;
int cnt = 0;
void dfs(int k, int total){
	if(total == 40){
		cnt++;
		return;
	}
	for(int i = k+1; i < n; i++)
		dfs(i, total+m[i]);
}
int main(){
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> m[i];
	for(int i = 0; i < n; i++)
		dfs(i,m[i]);
	cout << cnt << endl;

}
