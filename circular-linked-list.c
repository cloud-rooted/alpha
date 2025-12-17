#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *h=NULL,*t=NULL,*n;
    int x;
    printf("Enter elements (-1 stop): ");
    while(1){
        scanf("%d",&x);
        if(x==-1) break;
        n=malloc(sizeof(*n));
        n->data=x;
        if(!h){
            h=t=n;
            t->next=h;
        }else{
            t->next=n;
            n->next=h;
            t=n;
        }
    }
    n=h;
    do{
        printf("%d ",n->data);
        n=n->next;
    }while(n!=h);
}

