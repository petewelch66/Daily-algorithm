#include <stdio.h>
#include <stdlib.h>
void paixu(int a,int b,int c){
	int temp;
	if(a>b){
		temp=a;
		a=b;
		b=temp;}
	else if(a>c){
		temp=a;
		a=c;
		c=temp;}
	else if(b>c){
		temp=b;
		b=c;
		c=temp;}
}
int main(int argc, char *argv[]) {
	int a,b,c,d,e,f,g,h,i;
	int A,B,C;
	int AA,BB,CC;
	int flag=1;
	scanf("%d %d %d",&A,&B,&C);

    for(a=1;a<=9;a++)
        for(b=1;b<=9;b++)
            for(c=1;c<=9;c++)
                for(d=1;d<=9;d++)
                    for(e=1;e<=9;e++)
                        for(f=1;f<=9;f++)
                            for(g=1;g<=9;g++)
                                for(h=1;h<=9;h++)
                                    for(i=1;i<=9;i++)
                                        if (a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i
                                         && b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i
                                         && c!=d && c!=e && c!=f && c!=g && c!=h && c!=i
                                         && d!=e && d!=f && d!=g && d!=h && d!=i
                                         && e!=f && e!=g && e!=h && e!=i
                                         && f!=g && f!=h && f!=i
                                         && g!=h && g!=i
                                         && h!=i) 
										{
                                            AA=100*a+10*b+c;
                                            BB=100*d+10*e+f;
                                            CC=100*g+10*h+i;
                                            paixu(AA,BB,CC);
                                            if((AA*B==A*BB)&&(BB*C==B*CC)&&(AA*C==A*CC)){
                                            	printf("%d %d %d\n",AA,BB,CC);
                                            	flag=0;
											}
                                        }
    if(flag){
    	printf("No!!!");
	}
	return 0;
}

