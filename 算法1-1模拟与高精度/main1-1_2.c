#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d",&n, &m); 
    getchar();              

    char mine[105][105];    
    int ans[105][105]={0};

    int i=0,j=0,k=0;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            mine[i][j]=getchar();
        }
        getchar(); 
    }

    int dx[]={-1,-1,-1,0,0,1,1,1};
    int dy[]={-1,0,1,-1,1,-1,0,1};

    for(i=0; i<n;i++) {
        for(j=0;j<m;j++) {

            if(mine[i][j]=='*') {
                ans[i][j]=-1;  
            } 
			else 
			{
                for(k=0;k<8;k++) {
                    int x=i+dx[k];
                    int y=j+dy[k];

                    if (x>=0&&x<n&&y>=0&&y<m) {
                        if (mine[x][y]=='*') {
                            ans[i][j]++; }
                    }
                }
            }
        
		}
    }

    for(i=0; i<n;i++) {
        for(j=0; j<m;j++) {
            if (ans[i][j]==-1)
                printf("*");
            else
                printf("%d",ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
