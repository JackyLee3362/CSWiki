#include<iostream>
#include<cstdio>

using namespace std;

char alpha[9] = {0,3,3,3,3,3,4,3,4};
char str[101];
int pos[2][101];
int timearray[101];
void whichNum(char w, int i){
	int m = w - 'a' + 1;
	int n = 0;
	while(n <= 9 && m > alpha[n]){
		m -= alpha[n];
		n++;
	}
	pos[0][i] = n;
	pos[1][i] = m;	
}

int main(int argc, char* argv[]){
	int count = 0;
	while(cin >> str){
		int time = 0;
		int i = 0;
		while(str[i] != '\0'){
			whichNum(str[i],i);
			// cout << str[i] << '-' <<  pos[0][i] << '-' << pos[1][i] << endl;
			i++;			
			
		}
		for(int j = 0; j < i; j++){
			if(j >= 1 && pos[0][j] == pos[0][j-1]) time += 2;
			time += pos[1][j];
		}


		// cout << time <<endl;
		timearray[count++] = time;

	}
	for(int i = 0; i < count; i++)
		cout << timearray[i] << endl;
	return 0;
}
