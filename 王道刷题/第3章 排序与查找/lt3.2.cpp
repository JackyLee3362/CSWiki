#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 101;

struct Student{
	int number;
	int score;
}; 

void Swap(Student *s, int i, int j){
	Student temp;
	temp.number = s[i].number;
	temp.score = s[i].score;

	s[i].number = s[j].number;
	s[i].score = s[j].score;

	s[j].number = temp.number;
	s[j].score = temp.score;
}

int main(int argc, char* argv[]){
	int n;
	Student s[N];
	while(cin >> n){
		// input
		for(int i = 0; i < n; i++)
			cin >> s[i].number >> s[i].score;
		bool flag;
		// sort_score
		for(int i = 0; i < n-1; i++){
			flag = false;
			for(int j = n-1; j > i;j--){
				if(s[j].score < s[j-1].score) Swap(s,j,j-1);
				flag = true;
			}
			if(flag == false) break;
		}
		// sort_number	
		for(int i = 0; i < n-1; i++){
			flag = false;
			for(int j = n-1; j > i;j--){
				if(s[j].score ==  s[j-1].score && s[j].number < s[j-1].number) Swap(s,j,j-1);
				flag = true;
			}
			if(flag == false) break;
		}


		
		// output
		for(int i = 0; i < n; i++)
			cout << s[i].number << ' ' << s[i].score << endl;
	}	
	return 0;
}
