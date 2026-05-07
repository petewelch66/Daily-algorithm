#include <stdio.h>
#include <stdlib.h>
int n,k,a[20],res[200];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void dfs(int pos, int start) {
	int i;
    if(pos==k) {
        for(i=0;i<k;i++){
			printf("%3d",res[i]);}
		printf("\n");
        return;
    }
    for(i=start;i<n;i++) {
        res[pos]=a[i];
        dfs(pos+1,i+1);
    }
}

int main(int argc, char *argv[]) {
	int i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	dfs(0,0);
	return 0;
}
