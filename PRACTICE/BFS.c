#include<stdio.h>
#include<stdlib.h>

int g[20][20],v[20],n,i,j;

void bfs(int vx){
    printf("%d ",vx);
    v[vx]=1;
    for(i=0;i<n;i++){
        if(!v[i]&&g[vx][i]==1)
            bfs(i);
    }
}

void main(){
    int vx;
        printf("Enter number of vertices : ");
        scanf("%d",&n);
        
        printf("\nEnter the Adjacency Matrix : \n");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                scanf("%d",&g[i][j]);
            v[i]=0;
        }
        
        printf("\nEnter 1st vertex : ");
        scanf("%d",&vx);
        
        printf("\nBST traversal is : \n");
        bfs(vx);
}