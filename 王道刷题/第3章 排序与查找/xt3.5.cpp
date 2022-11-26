#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct xys{
	int x,y;
};

bool cmp(const xys a, const xys b){
	if( a.x < b.x) return true;
	else if( a.x == b.x && a.y < b.y) return true;
	return false;
}

const int N = 1001;
int main(){
	int n;
	xys xy[N];
	while(cin >> n){
		for(int i = 0; i < n; i++)
			cin >> xy[i].x >> xy[i].y;
		sort(xy,xy+n, cmp);
		cout << xy[0].x << ' ' << xy[0].y << endl;
	}
	return 0;
}
	
