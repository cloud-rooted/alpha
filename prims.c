#include <stdio.h>
#define INF 999

int main(){
    int n=4, cost[4][4]={
        {0,1,3,INF},
        {1,0,2,4},
        {3,2,0,5},
        {INF,4,5,0}
    };
    int vis[4]={1,0,0,0}, min,a,b,i,j;

    for(int e=0;e<n-1;e++){
        min=INF;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(vis[i] && !vis[j] && cost[i][j]<min){
                    min=cost[i][j]; a=i; b=j;
                }
        printf("%d-%d=%d\n",a,b,min);
        vis[b]=1;
    }
}

