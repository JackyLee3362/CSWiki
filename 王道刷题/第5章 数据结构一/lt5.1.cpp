#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> E;
	vector<int> G;
	// input
	for(int i = 2; i <= 60; i++){
		int sum = 0;
		for(int j = 1; j <= i/2; j++)
			if(i % j == 0) sum += j;
		if(sum == i) E.push_back(i);
		else if(sum > i) G.push_back(i);

	}
	// output 
	cout << "E:";
	for(int i = 0; i < E.size(); i++)
		cout << ' ' << E[i];
	cout << endl;
	cout << "G:";
	for(int i = 0; i < G.size(); i++)
		cout << ' '<< G[i];
	cout << endl;
	return 0;
}

