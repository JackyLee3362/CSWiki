#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char* argv[]){
	int P,T,G1,G2,G3,GJ;
	float avg;
	int t12,t13,t23;
	cin >> P >> T >> G1 >> G2 >> G3 >> GJ;
	t12 = abs(G1-G2);
	t13 = abs(G1-G3);
	t23 = abs(G2-G3);
	if(t12 <= T) {avg = G1 + G2; avg /= 2;}
	else if( t13 <= T && t23 <= T) avg = max(G1,max(G2,G3));
	else if( t13 <= T || t23 <= T) {avg = t13>t23?(G2+G3):(G1+G3);avg /= 2;}
	else avg = GJ;	
	printf("%.1f\n",avg);
	return 0;
}
