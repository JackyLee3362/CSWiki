#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	string x, y;
	while(cin >> x >> y){
		int xdot = x.find('.');
		int ydot = y.find('.');
		int xdn = x.size() - xdot;
		int ydn = y.size() - ydot; 
		// insert 0 before '.'
		if(xdot > ydot)
			for(int i = 0; i < xdot - ydot; i++) y.insert(0,"0");
		else for(int i = 0; i < ydot - xdot; i++) x.insert(0,"0");
		// insert 0 after '.'
		if(xdn > ydn)
			for(int i = 0; i < xdn - ydn; i++) y.insert(y.size(), "0");
		else	for(int i = 0; i < ydn - xdn; i++) x.insert(x.size(), "0");
		// calculate
		xdot = x.find('.');
		int flag = 0, num = 0;
		for(int i = x.size() - 1; i >= 0; i--)
			if(i != xdot){
				num = x[i] - '0' + y[i] - '0' + flag;
				flag = num / 10;
				num = num % 10;
				x[i] = num + '0';
			}
		if(flag == 1) x.insert(0,"1");
		cout << x << endl;			
	}
	return 0;
}

	
	
