#include <stdio.h>
#include <string.h>

int bigMul(char a[], char b[], int res[]) {
    int lenA=strlen(a);
    int lenB=strlen(b);
    int i,j,k;
    int maxLen=lenA+lenB;

    for(i=0;i<lenA;i++) {
        int numA=a[lenA-1-i]-'0';
        for (j=0;j<lenB;j++) {
            int numB=b[lenB-1-j]-'0';
            res[i+j]+=numA*numB; 
        }
    }
    int carry=0;
    for (k=0;k<maxLen;k++) {
        int total=res[k]+carry;
        res[k]=total%10;
        carry=total/10;
    }

    int end=maxLen-1;
    while(end>0&&res[end]==0) {
    	end--;
	}
    return end+1;
}

int main() {
    char num1[10000], num2[10000];
    int result[20000]={0}; 
    int i;
    scanf("%s",num1);
    scanf("%s",num2);

    int len=bigMul(num1,num2,result);
    for (i=len-1;i>=0;i--) {
        printf("%d",result[i]);
    }
    printf("\n");
    return 0;
}
