#include<iostream>
#include<cstdio>
#include<math.h>
#define NUM 3000

using namespace std;

int a,b;
char temp[6][6];
char matrix[NUM][NUM];
 


int dfs(int m, int n, int x, int y){
	if( n == 1)
		for(int i = 0; i < x; i++)
			for(int j = 0; j < y; j++)
				matrix[i+x][j+y] = temp[i][j];	
	else{
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				if(temp[i][j] != ' ')
					dfs(
	}
	return 0;
}

int main(int argc, char* argv[]){
	int l = 0; // total length
    	while(cin >> a){
		getchar();
		for(int i = 0; i < a; i++)
			cin.getline(temp[i],6);
		cin >> b;
		l = pow(a, b);
		// init matrix
		for(int i = 0; i < l; i++)
			for(int j = 0; j < l; j++)
				matrix[i][j] = ' ';
		// special condition
		if( b == 1 )
			for(int i = 0; i < l; i++)
				for(int j = 0; j < l; j++)
					matrix[i][j] = temp[i][j];
		else
			dfs(a, b);
		// print matrix
		for(int i = 0; i < l; i++){
			for(int j = 0; j < l; j++)
				cout << matrix[i][j];
			cout << endl;
		}
    }
    
    return 0;
}
