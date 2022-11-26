//学不会的程序
#include <stdio.h>
#define N 233   //截止到2021年，全世界有233个国家和地区
int main() 
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF) //国家数N，排名国家数M
    {
        int wzh[N][3];   //定义存放奥运金牌数，奖牌数，人口数的二维数组
        for(int i=0; i<n; i++) 
        {
            scanf("%d%d%d",&wzh[i][0],&wzh[i][1],&wzh[i][2]);  //输入奥运金牌数，奖牌数，人口数
        }
        float data[N][4];  //  对排序的4种方式进行赋值的数组，将奥运金牌数，奖牌数，人口数三个量转换为奥运金牌数，奖牌数，金牌人口比例奖牌，人口比例四个量
        int rank[N][4]= {0};  //存放排名顺序的数组
        for(int i=0; i<m; i++) 
        {
            int id;
            scanf("%d",&id);   //输入国家号
            data[i][0]=wzh[id][0];   //奥运金牌数
            data[i][1]=wzh[id][1];   //奖牌数
            data[i][2]=wzh[id][0]?data[i][0]/wzh[id][2]:0;    //金牌人口比例，使用了三目运算符
            data[i][3]=wzh[id][1]?data[i][1]/wzh[id][2]:0;    //奖牌人口比例
        }
        for(int i=0; i<m; i++) 
        {
            for(int j=0; j<m; j++) 
            {
                for(int k=0; k<4; k++) 
                {
                    if(data[j][k]>data[i][k]) //对金牌总数，奖牌总数，金牌人口比例，奖牌人口比例 进行比较
                    {
                        rank[i][k]++;   //国家j比国家i数据大，则国家i排名加一
                    }
                }
            }
        }
        for(int i=0; i<m; i++) 
        {
            int min=0; 
            for(int j=1; j<4; j++) 
            {
                if(rank[i][j]<rank[i][min])  //输出排名方式最小的那种排名
                {
                    min=j;
                }
            }
	    for(int k = 0; k < 4; k++){
		    if(k>=2) data[i][k] *= 100;
		    printf("num:%.0f rank is %d...",data[i][k],rank[i][k]+1);
	    }
            printf("%d:%d\n",rank[i][min]+1,min+1); //数组从0开始，排名加一
        }
        printf("\n");
    }
}
