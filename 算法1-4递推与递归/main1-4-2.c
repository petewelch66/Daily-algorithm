#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[8][2]={{1,2},{2,1},{1,-2},{-2,1},{-1,2},{2,-1},{-1,-2},{-2,-1}};
	int qi[30][30];
	long long bu[30][30];
	int n,m,a,b,i,j;
	scanf("%d %d %d %d",&n,&m,&a,&b);
	for(i=0;i<30;i++){
		for(j=0;j<30;j++){
			qi[i][j]=1;
		}
	}
	qi[a][b]=0;
	for(i=0;i<8;i++){
		int x=a+arr[i][0];
		int y=b+arr[i][1];
		if(x>=0&&x<=n&&y>=0&&y<=m){
			qi[x][y]=0;
		}
	}
	for(i=0;i<30;i++){
        for(j=0;j<30;j++){
            bu[i][j]=0;
        }
    }
    bu[0][0]=1;

    if(qi[0][0]==0){
        printf("0");
        return 0;
    }
	for(i=0;i<=n;i++){
		for(j=0;j<=m;j++){
			if(qi[i][j]){
				if(i){
					bu[i][j]+=bu[i-1][j];
				}
				if(j){
					bu[i][j]+=bu[i][j-1];
				}
			}
		}
	}
	printf("%lld",bu[n][m]);
	return 0;
}
