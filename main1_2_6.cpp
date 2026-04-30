#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[21]={0};
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int b[21];
	for(i=0;i<=n;i++){
		b[i]=a[i];
	}
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++){
		if(b[i]==a[n]){
			break;
		}
	}
	printf("%d\n%d",i,a[n]);
	return 0;
}
