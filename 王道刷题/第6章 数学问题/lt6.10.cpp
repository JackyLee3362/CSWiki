#include<iostream>
#include<string>
#include<vector>
// A = 12, B = 6, return 12^6%1000=2985984%1000=984
// B = 110 in 
// strB = {011}  
// vecB = {12,144,736}     
// 
using namespace std;

string toBinaryinvert(int n){
	string str;
	while(n){
		char k = n % 2 + '0';
		n /= 2;
		str.push_back(k);
	}
	return str;
}

int main(){
	int A, B;
	while(cin >> A >>B){
		if(A == 0 && B == 0) break;
		string strB;
		vector<int> vecB;
		int sum = 1;
		strB = toBinaryinvert(B);
		for(int i = 0; i < strB.size(); i++){
			if(i == 0) vecB.push_back(A % 1000);
			else vecB.push_back(vecB[i-1] * vecB[i-1] % 1000);
			if(strB[i] == '1') sum = (sum*vecB[i]) % 1000; 
		}
		cout << sum << endl;
	}
	return 0;
}
