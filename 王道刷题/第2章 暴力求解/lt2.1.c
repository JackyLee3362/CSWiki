#include<stdio.h>

int main(){
	int a,b,c,d,N,Nv;
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					N = 1000 * a + 100 * b + 10 * c + d;
					Nv = 1000 * d + 100 * c + 10 * b + a;
					if( N * 9 == Nv ) 
						printf("%d%d%d%d\n",a,b,c,d);
				}
			}
		}
	}
	return 0;
}

