#include<iostream>
#include<algorithm>

using namespace std;

struct country{
	float golden;
	float total;
	float population;
};

const int N = 300;

int main(int argc, char** argv){
	int n,m;
	country a[N];
	float b[N][4];
	while(cin >> n >> m){
		// input
		int rank[N][5] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i].golden >> a[i].total >> a[i].population;
		}
		for(int i = 0; i < m; i++){
			int temp;
			cin >> temp;
			b[i][0] = a[temp].golden;
			b[i][1] = a[temp].total;
			b[i][2] = a[temp].golden ? a[temp].golden / a[i].population : 0;
			b[i][3] = a[temp].total ? a[temp].total / a[i].population : 0;
		}
		// sort
		for(int i = 0; i < m; i++)
			for(int j = 0; j < m; j++)
				for(int k = 0; k < 4; k++)
					if(b[j][k] > b[i][k]) rank[i][k]++;
		// find min and output
		int min;
		for(int i = 0; i < m; i++){
			min = 0;
			for(int j = 0; j < 4; j++)
				if(rank[i][j] < rank[i][min]) min = j;
			for(int k = 0; k < 4; k++)
				 cout << " num:" << b[i][k] << " rank is " << rank[i][k]+1 << "...";
			cout << rank[i][min] + 1 << ':' << min + 1 << endl;
		}
		cout << endl;
	}
	return 0;
}


