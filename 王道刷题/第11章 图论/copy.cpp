#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;

const int MAX=26;
int father[MAX];
int height[MAX];
int number_of_each_gang[MAX];
int weight_of_each_gang[MAX];
int weight_of_each_one[MAX];
bool visited[MAX];

int ToDigit(string str) {
    return str[0]-'A';
}
string ToString(int x) {
    string ans="";
    //for(int i=0; i<3; i++) {
        ans+=x+'A';
//    }
    return ans;
}
void Init() {
    for(int i=0; i<MAX; i++) {
        father[i]=i;
        height[i]=0;
        number_of_each_gang[i]=1;//刚开始是自己一个人 
        weight_of_each_gang[i]=0;
        visited[i]=false;
        weight_of_each_one[i]=0;
    }
}
int Find(int x) {
    if(x!=father[x]) {
        father[x]=Find(father[x]);
    }
    return father[x];
}
void Union(int x,int y,int weight) {
    x=Find(x);
    y=Find(y);
    if(x!=y) { //不属于同一连通子图
        if(height[x]<height[y]) {//y是根
            father[x]=y;
            weight_of_each_gang[y]+=weight+weight_of_each_gang[x];//两个子图合并加上中间的连接权值 
            number_of_each_gang[y]+=number_of_each_gang[x];//两个子图人员合并
        } else if(height[x]>height[y]) { //x是根
            father[y]=x;
            weight_of_each_gang[x]+=weight+weight_of_each_gang[y];
            number_of_each_gang[x]+=number_of_each_gang[y];
        } else { //x是根
            father[y]=x;
            height[x]++;
            weight_of_each_gang[x]+=weight+weight_of_each_gang[y];
            number_of_each_gang[x]+=number_of_each_gang[y];
        }
    } else { //已经属于同一连通子图 （权值增加  人数不增加）
        weight_of_each_gang[x]+=weight;
    }
}

int main() {

    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF) {
        Init();
        while(n--) {
            string Name1, Name2;
            int Time;
            cin>>Name1>>Name2>>Time;

            int N1=ToDigit(Name1);
            int N2=ToDigit(Name2);
            visited[N1]=true;
            visited[N2]=true;
            weight_of_each_one[N1]+=Time;//个人权值
            weight_of_each_one[N2]+=Time;
            Union(N1,N2,Time);
        }
        int number_of_gang=0;
        map<int,int> head;
        for(int i=0; i<MAX; i++) {
            if(!visited[i]) {
                continue;
            }            
            if(father[i]==i&&number_of_each_gang[i]>2&&weight_of_each_gang[i]>k) { //符合gangs定义
                    number_of_gang++;
                int ID=i;//记录头目的编号(初始化为这个团伙的根成员的编号)
                int max_weight=weight_of_each_one[i];//记录头目的权值(初始化为这个团伙的根成员的权值)
                for(int j=0; j<MAX; j++) {
                    if(!visited[i]||i==j) {
                        continue;
                    }
                    if(Find(j)==i) { //找到属于这个gang的成员
                        if(max_weight<weight_of_each_one[j]) {
                            ID=j;
                            max_weight=weight_of_each_one[j];
                        }
                    }
                }
                head[ID]=number_of_each_gang[i];
            }
        }

        cout<<number_of_gang<<endl;
        if(number_of_gang!=0) {
            map<int,int>::iterator it;
            for(it=head.begin(); it!=head.end(); it++) {
                cout<<ToString(it->first)<<" "<<it->second<<endl;
            }
        }
    }
    return 0;
}
