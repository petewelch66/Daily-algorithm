#include <stdio.h>
#include <math.h>
int n,k,a[100],res[100];
int count=0;

int isPrime(int x){
	int i;
	if(x<2) 
		return 0;      
    for(i=2; i<=sqrt(x);i++) {
        if (x%i==0) return 0;
    }
    return 1;
}

void dfs(int pos, int start) {
	int i,sum=0;
	
    if(pos==k) {
        for(i=0;i<k;i++){
			sum+=res[i];}
		if(isPrime(sum)){
			count++;
		}
        return;
    }
    for(i=start;i<n;i++) {
        res[pos]=a[i];
        dfs(pos+1,i+1);
    }
}

int main(){
	int i,jishu;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
	scanf("%d", &a[i]);}
	
    dfs(0,0);
    printf("%d",count);
    return 0;
}

