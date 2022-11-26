#include<iostream>
#include<algorithm>

using namespace std;

bool BinarySearch(int *a, int n, int target){
	int left = 0;
	int right = n - 1 ;
	while(left <= right){
		int middle = (left + right)/2;
		if(target < a[middle]) right = middle - 1;
		else if(target > a[middle]) left = middle + 1;
		else return true;
	}
	return false;
}

int main(){
	int n,m,na[101],ma[101];
	while(cin >> n){
		for(int i = 0; i < n; i++)
			cin >> na[i];
		cin >> m;
		for(int i = 0; i < m; i++)
			cin >> ma[i];
		sort(na,na+n);
		for(int i = 0; i < m; i++)
			if(BinarySearch(na,n,ma[i])) cout << "YES" << endl;
			else cout << "NO" << endl;

	}
	return 0;
}
		
