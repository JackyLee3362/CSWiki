#include <iostream>
#include <queue>
#include <vector>

using namespace std;
struct animal{
	int number;
	int order;
	animal(int n, int o): number(n), order(o){}	
};

void animalpop(queue<animal> &a){
	int j = a.front().number;
	cout << j << ",";
	a.pop();
}

int main(int argc, char** argv){
	int n, method,t,order;
	queue<animal>dogs, cats;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> method >> t;
		if(method == 1)
			if(t>0) dogs.push(animal(t,order++));
			else
				cats.push(animal(t,order++));
		else if(method == 2)
			if(t == 1 && !dogs.empty())
				animalpop(dogs);
			else if(t==-1 && !cats.empty())
				animalpop(cats);
			else if(t==0)
				if(!dogs.empty() && !cats.empty())
					if(cats.front().order < dogs.front().order) animalpop(dogs);
					else animalpop(cats);
				else if(!dogs.empty() && cats.empty()) animalpop(dogs);
				else if(dogs.empty() && cats.empty()) animalpop(cats);
	}
	return 0;
}
