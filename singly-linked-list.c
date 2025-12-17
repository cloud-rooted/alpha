#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *h=NULL,*t=NULL,*n;
    int x;
    printf("Enter elements (-1 to stop): ");
    while(1){
        scanf("%d",&x);
        if(x==-1) break;
        n=malloc(sizeof(*n));
        n->data=x; n->next=NULL;
        if(!h) h=t=n;
        else t->next=n, t=n;
    }
    while(h){
        printf("%d ",h->data);
        h=h->next;
    }
}

