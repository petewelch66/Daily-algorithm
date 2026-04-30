#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[25][2501];
	int i=0,j=0,jishu=0;
	char ch;
	int end=0;
	
	while (i<25&&!end) {     
        ch=getchar(); 
        if(ch==EOF || ch=='E') {  
	        str[i][j]='\0';
	        end=1; 
	        break;
	    }
        if (ch=='\n') { 
            str[i][j]='\0';
            i++;
            j=0;
            continue;
        }
        if(j >= 2500) continue;
        str[i][j]=ch;  
        j++;     
	jishu++;   
    }
	
	int flag1=0,flag2=0;
	
	for(i=0;i<25;i++){
		for(j=0;str[i][j]!='\0';j++){
			char c=str[i][j];
			if(c=='W'){
				flag1++;
			}
			else if(c=='L'){
				flag2++;
			}
			if(((flag1>=11)||(flag2>=11))&&((flag1-flag2>=2)||(flag2-flag1>=2))){
				printf("%d:%d\n",flag1,flag2);
				flag1=flag2=0;
			}
		}
	}
	if(flag1>0 || flag2>0)
		printf("%d:%d\n\n",flag1,flag2);
	else
		printf("0:0\n\n");

	
	flag1=flag2=0;
	
	for(i=0;i<25;i++){
		for(j=0;str[i][j]!='\0';j++){
			char c=str[i][j];
			if(c=='W'){
				flag1++;
			}
			else if(c=='L'){
				flag2++;
			}
			if(((flag1>=21)||(flag2>=21))&&((flag1-flag2>=2)||(flag2-flag1>=2))){
				printf("%d:%d\n",flag1,flag2);
				flag1=flag2=0;
			}
		}
	}
	if(flag1>0 || flag2>0)
		printf("%d:%d\n",flag1,flag2);
	else
		printf("0:0\n");
	
	return 0;
}
