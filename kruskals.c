#include <stdio.h>

int find(int p[],int i){
    while(p[i]) i=p[i];
    return i;
}

int main(){
    int cost[3][3]={{0,1,3},{1,0,2},{3,2,0}};
    int p[3]={0},min,a,b,u,v;

    for(int e=0;e<2;e++){
        min=999;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(cost[i][j] && cost[i][j]<min){
                    min=cost[i][j]; a=i; b=j;
                }
        u=find(p,a); v=find(p,b);
        if(u!=v){
            p[v]=u;
            printf("%d-%d=%d\n",a,b,min);
        }
        cost[a][b]=cost[b][a]=999;
    }
}

