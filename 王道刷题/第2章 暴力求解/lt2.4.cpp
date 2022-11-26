#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char* argv[]){
	int h,blank,star,total;
	cin >> h; 
	total = 3 * h - 2;
	for(int i = 0; i < h; i++){
		star = h + 2 * i;
	      	blank = 2 * h - 2 * i - 2;
		while(blank){cout << " "; blank--;}
		while(star){cout << "*";star--;}
		cout << endl;
	}
}
			
			
			

