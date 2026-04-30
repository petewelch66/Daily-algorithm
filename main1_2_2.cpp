#include <stdio.h>
#include <stdlib.h>
#include <algorithm> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[101];
int main(int argc, char *argv[]) {
	int m,i,j;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+m);
	for(i=0;i<m-1;i++){
		while(a[i]==a[i+1]){
			for(j=i+1;j<m-1;j++){
				a[j]=a[j+1];
			}
			m--;
		}
	}
	printf("%d\n",m);
	for(i=0;i<m;i++){
	printf("%d ",a[i]);
}

	return 0;
}
