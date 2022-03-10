#include<stdio.h>
#include<stdlib.h>

int g[20][20],v[20],a[20],n,i,j;
static int count=0,k=-1;

void bfs(int vx){
    int c=0;
    count++;
    printf("%d ",vx);
    v[vx]=1;
    for(i=0;i<n;i++){
        if(!v[i]&&g[vx][i]==1){
            a[++k]=i;
            c=1;
        }
        if(n==count)
            exit(0);
    }
    if(c==1)
        bfs(a[k]);
    else{
        k--;
        bfs(a[k]);
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
        
        printf("\nBFS traversal is : \n");
        bfs(vx);
}