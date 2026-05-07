#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long ans=0;
    int len=n;  
    while(len>1) {
        sort(a,a+len);  
        int sum=a[0]+a[1];  
        ans+=sum;
        a[1]=sum;      
        a[0]=a[len-1]; 
        len--;          
    }
    printf("%lld",ans);
	return 0;
}
