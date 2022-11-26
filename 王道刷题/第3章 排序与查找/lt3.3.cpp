#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct student{
	string name;
	int score;
};
bool cmp0(const student &a, const student b){
	if( a.score > b.score) return true;
	return false;
}
bool cmp1(const student &a, const student b){
	if( a.score < b.score) return true;
	return false;
}
int main(){
	int n, m;
	while(cin >> n >> m){
		vector<student> s(n);
		for(int i = 0; i < n; i++)
			cin >> s[i].name >> s[i].score;
		if( m == 0) stable_sort(s.begin(),s.end(),cmp0);
		else stable_sort(s.begin(), s.end(), cmp1);
		for(int i = 0; i < n; i++)
			cout << s[i].name << ' ' << s[i].score << endl;
	}
	
	return 0;
}
