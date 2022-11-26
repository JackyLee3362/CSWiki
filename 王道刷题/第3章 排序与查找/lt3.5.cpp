#include<iostream>

using namespace std;

int main(){
	int n,m,na[101],ma[101];
	bool mb[101] = {false};
	while(cin >> n){
		for(int i = 0; i < n; i++)
			cin >> na[i];
		cin >> m;
		for(int i = 0; i < m; i++)
			cin >> ma[i];
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				if(ma[i] == na[j])
					{mb[i]=true;break;}
		for(int i = 0; i < m; i++)
			if(mb[i])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
	}
	return 0;
}
		
