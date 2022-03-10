// Online C compiler to run C program online
#include <stdio.h>

int cost[20][20],i,j,u,v,ne=1,n,min,mincost=0,visited[20],a,b;
int main() {
    printf("Vertices : ");
    scanf("%d",&n);
    printf("Adj Matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    visited[i]=0;
    }
    visited[1]=1;
    while(ne<n){
        for(i=0,min=999;i<n;i++){
            for(j=0;j<n;j++){
                if(cost[i][j]<min){
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        if(visited[u]==0||visited[j]==0){
            printf("Edge %d : (%d,%d) cost : %d\n",ne++,u,v,min);
            mincost+=min;
            visited[v]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    
    return 0;