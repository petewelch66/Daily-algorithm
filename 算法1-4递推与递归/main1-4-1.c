#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	long long a=1,b=2,c;
	int i;
	if(n==1){
		printf("1");
		return 0;
	}
	else if(n==2){
		printf("2");
		return 0;
	}
	else{
	for(i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("%lld",b);}
	return 0;
}
