#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char* argv[]){
    int i,X,Y,Z,j,N,cost,per,XYZ,flag;
    while(cin >> N >> X >> Y >> Z){
        XYZ = 1000 * X + 100 * Y + 10 * Z;
        flag = 0;
    for(i=9;i>0;i--){
        for(j=9;j>=0;j--){
            cost = 10000 * i + XYZ + j;
            if(cost % N == 0){flag = 1; break;}
        }
        if(flag == 1) break;
    }
        if(flag == 0){
            cout << 0 << endl;
        }
        else{
            per = cost / N;
            cout << i << " " << j << " " << per << endl;
        }
    
    }
}
