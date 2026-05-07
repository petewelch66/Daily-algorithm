#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct jinbi{
	double m;
	double v;
	double price;
}ji[110];
bool cmp(jinbi a,jinbi b){
	return a.price>b.price;
}
int main(int argc, char** argv) {
	int N,i;
	double T;
	double ans=0;
	scanf("%d %lf",&N,&T);
	for(i=0;i<N;i++){
		scanf("%lf %lf",&ji[i].m,&ji[i].v);
		ji[i].price=ji[i].v/ji[i].m;
	}
	sort(ji,ji+N,cmp);
	for(i=0;i<N;i++){
		if(ji[i].m<=T){
			T-=ji[i].m;
			ans+=ji[i].v;
		}
		else{
			ans+=ji[i].price*T;
			break;
		}
	}
	printf("%.2f",ans);
	return 0;
}
