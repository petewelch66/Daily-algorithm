#include <stdio.h>
#include <string.h>

#define MAX 10000

void bigMul(int fact[], int *len, int n) {
    int carry=0;
    int i;
    for (i=0; i<*len;i++) {
        int product=fact[i]*n+carry;
        fact[i]=product%10;
        carry=product/10;
    }
    while(carry){
        fact[*len]=carry%10;
        carry/=10;
        (*len)++;
    }
}

void bigAdd(int sum[],int *sumLen,int fact[],int factLen) {
    int carry=0, i=0;
    while(i<factLen||carry) {
        if (i<*sumLen) carry+=sum[i];
        if (i<factLen) carry+=fact[i];
        sum[i]=carry%10;
        carry/=10;
        i++;
    }
    *sumLen=i;
}

void printNum(int num[],int len) {
	int i;
    for (i=len-1;i>=0;i--) {
        printf("%d",num[i]);
    }
}

int main() {
    int n,i;
    scanf("%d",&n);

    int fact[MAX]={1};
    int factLen=1;

    int sum[MAX]={0};
    int sumLen=1;

    for (i=1; i<=n;i++) {
        bigMul(fact,&factLen,i);    
        bigAdd(sum,&sumLen,fact,factLen); 
    }

    printNum(sum,sumLen);
    return 0;
}

