#include<iostream>
#include<string>

using namespace std;

long long NtoDigital(string s, int N){
	long long sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum *= N;
		if(s[i] >= '0' && s[i] <= '9')
			sum += s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'z')
			sum += s[i] -'a' + 10;
		else if(s[i] >= 'A' && s[i] <= 'Z')
			sum += s[i] - 'A' + 10;
	}
	return sum;
}

void DigitaltoN(long long sum, string &s, int N){
	int i = 0;
	while(sum){
		int k = sum % N;
		sum = sum / N;
		if(k <= 9 && k >= 0) s.insert(s.begin(), k+'0');
		else if(s[i] >= 'a' && s[i] <= 'z')
			s.insert(s.begin(), k-10+'A');
		else if(s[i] >= 'A' && s[i] <= 'Z')
			s.insert(s.begin(), k-10+'A');
		i++;
	}
}

int main(){
	int M,N;
	string x,y;
	while(cin >> M >> N){
		cin >> x;
		long long sum = NtoDigital(x, M);
		//	cout << sum << endl;
		DigitaltoN(sum, y, N);
		cout << y << endl;
		y.clear();
	}
	return 0;
}
