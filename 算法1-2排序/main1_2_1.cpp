#include <stdio.h>
#include <stdlib.h>
#include <algorithm> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[2000001];
int main(int argc, char *argv[]) {
	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+m);
	for(i=0;i<m;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
