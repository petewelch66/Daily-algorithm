#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m;
	int e= 5000;
    int f= 5000;
	int i=0,j=0;
	int **a =(int **)malloc(e*sizeof(int *));

	for(i=0;i<e;i++) {
    a[i]=(int *)malloc(f*sizeof(int));
	}
	 
	scanf("%d %d",&m,&n);
	
	
	int zheng=n*m,chang=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			a[i][j]=j;
		}
	}
	
	int x,y;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			for(x=i;x<m;x++){
				for(y=j;y<n;y++){
					if(x==i&&y==j)
						continue;
					if((x-i)==(y-j)&&(x-i)>0)
						zheng++;
					else
						chang++;
				}
			}
		}
	}
	
	printf("%d ",zheng);
	printf("%d",chang);
	return 0;
}
