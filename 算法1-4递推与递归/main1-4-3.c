#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long fact(int n){
	long long i,fac=1;
	for(i=1;i<=n;i++)
		fac*=i;
	return fac;
	
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	long long result=fact(2*n)/(fact(n)*fact(n)*(n+1));
	printf("%lld",result);
	return 0;
}
