#include<iostream>
#include<cstdio>

using namespace std;

void matrix_init(char matrix[][80]){
	for(int i = 0; i < 80; i++){
		for(int j = 0; j < 80; j++)
			matrix[i][j] = '0';
	}
}	

void matrix_print(char matrix[][80], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << matrix[i][j];
		cout << endl << endl;
	}
}

void matrix_insert(char matrix[][80], int start, int len, char word){
	for(int i = start; i < start + len; i++){
		for(int j = start; j < start + len; j++){
			matrix[i][j] = word;
		}
	}
}

void matrix_dots(char matrix[][80], int n ){
	char edge = ' ';
	matrix[0][0] = edge;
	matrix[0][n-1] = edge;
	matrix[n-1][0] = edge;
	matrix[n-1][n-1] = edge;
}

int main(int argc, char* argv[]){
	char matrix[80][80];
	int n;
	char c,w; // n(number) c(center) w(wall)
	cin >> n >> c >> w;
	matrix_init(matrix);
	for(int i = 0; i <= n/2; i++){
		if(i % 2 == 0) matrix_insert(matrix, i, n - 2 * i, w);
		else matrix_insert(matrix, i, n - 2 * i, c);
	}
	matrix_dots(matrix, n);
	matrix_print(matrix, n);
	return 0;
}
