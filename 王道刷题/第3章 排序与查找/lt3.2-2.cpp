#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct student{
	int num;
	int score;
};
bool cmp(const student &a, const student b){
	if(a.score < b.score) return true;
	else if( a.score == b.score && a.num < b.num) return true;
	return false;
}
int main(int argc, char* argv[]){
	int n;
	while(cin >> n){
		vector<student> table(n);
		for(int i = 0; i < n; i++)
			cin >> table[i].num >> table[i].score;
		sort(table.begin(),table.end(),cmp);
		for(int i = 0; i < n; i++)
			cout << table[i].num << ' ' << table[i].score << endl;
	}	
	return 0;
}
