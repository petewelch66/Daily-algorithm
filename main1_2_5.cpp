#include <stdio.h>
#include <stdlib.h>
#include <algorithm> 
using namespace std;
struct student{
	int no;
	int yu;
	int shu;
	int yin;
	int zong;
}stu[301]={0};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(student a,student b){
	if(a.zong!=b.zong) return a.zong>b.zong;
	else if(a.yu!=b.yu) return a.yu>b.yu;
	else return a.no<b.no;
}
int main(int argc, char** argv) {
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		stu[i].no=i;
		scanf("%d %d %d",&stu[i].yu,&stu[i].shu,&stu[i].yin);
		stu[i].zong=stu[i].yu+stu[i].shu+stu[i].yin;
	}
	sort(stu+1,stu+n+1,cmp);
	for(i=1;i<=5;i++){
		printf("%d %d",stu[i].no,stu[i].zong);
		printf("\n");
	}
	return 0;
}
