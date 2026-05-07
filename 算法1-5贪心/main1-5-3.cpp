#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct kssj{
	int x,y;
}shijian[1000010];
bool cmp(kssj a,kssj b){
	if(a.x!=b.x)  return a.x>b.x;
	else return a.y<b.y;
}
int main(int argc, char** argv) {
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&shijian[i].x,&shijian[i].y);
	}
	sort(shijian,shijian+n,cmp);
	int ans=1,lastx=shijian[0].x;
	for(i=0;i<n;i++){
		if(shijian[i].y<=lastx){
			lastx=shijian[i].x;
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
