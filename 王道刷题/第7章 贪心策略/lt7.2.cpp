#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

const int K = 100;

struct room{
	float catfood;
	float mousefood;
	float mdc;
};

bool cmp(room x, room y){
	if(x.mdc > y.mdc) return true;
	return false;
}

int main(){
	int M,N;
	while(cin >> M >> N){
		if(M == -1 && N == -1) break;
		room r[K];
		// input
		for(int i = 0; i < N; i++){
			cin >> r[i].mousefood >> r[i].catfood;
			r[i].mdc = r[i].mousefood / r[i].catfood;
		}
		sort(r,r+N,cmp);
		// output
		for(int i = 0; i < N; i++)
			printf("%.0f-%.0f-%.2f\n",r[i].mousefood,r[i].catfood, r[i].mdc);
		// pay
		float get = 0;
		for(int i = 0; i < N; i++){
			if(M >= r[i].catfood){
				get += r[i].mousefood;
				M -= r[i].catfood;
			}
			else if(M < r[i].catfood){
				get += r[i].mousefood * ((float)M / r[i].catfood);
				break;
			}
		}
		printf("\n total get == %.3f\n", get);
	}
	return 0;
}
