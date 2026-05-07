#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct denren{
	int ji;
	int t;
}ren[1010];
bool cmp(denren a,denren b){
	if(a.t!=b.t) return a.t<b.t;
	else return a.ji<b.ji;
}
int main(int argc, char** argv) {
	int i,n;
	double ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ren[i].t);
		ren[i].ji=i+1;
	}
	sort(ren,ren+n,cmp);
	double leijia=0;
    for(i=0;i<n;i++) {
        leijia+=ren[i].t;
        ans+=leijia;
    }
    ans-=leijia;
	for(i=0;i<n;i++){
		printf("%d ",ren[i].ji);
	}
	printf("\n%.2f",ans/n);
	return 0;
}
