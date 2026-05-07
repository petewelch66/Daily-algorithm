#include <stdio.h>
#include <string.h>

int bigAdd(char a[], char b[], int res[]) {
    int lenA=strlen(a);
    int lenB=strlen(b);
    int i=0,carry=0; 

    while (i<lenA||i<lenB||carry>0) {
        int numA=(i<lenA)?(a[lenA-1-i]-'0'):0;
        int numB=(i<lenB)?(b[lenB-1-i]-'0'):0;
        int sum=numA+numB+carry;
        
        res[i]=sum%10;  
        carry=sum/10;   
        i++;
    }
    return i; 
}

int main() {
    char num1[10000],num2[10000];
    int result[10001]={0}; 
    scanf("%s %s",num1,num2);
    
    int i;
    int len=bigAdd(num1,num2,result);
    for(i=len-1; i>=0;i--) {
        printf("%d",result[i]);
    }
    printf("\n");
    return 0;
}
