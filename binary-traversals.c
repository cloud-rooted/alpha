#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *l, *r;
};

struct node* new(int x){
    struct node *n = malloc(sizeof(*n));
    n->data = x;
    n->l = n->r = NULL;
    return n;
}

void inorder(struct node *t){
    if(t){
        inorder(t->l);
        printf("%d ", t->data);
        inorder(t->r);
    }
}

void preorder(struct node *t){
    if(t){
        printf("%d ", t->data);
        preorder(t->l);
        preorder(t->r);
    }
}

void postorder(struct node *t){
    if(t){
        postorder(t->l);
        postorder(t->r);
        printf("%d ", t->data);
    }
}

int main() {
    // Creating a simple binary tree:
    //         1
    //        / \
    //       2   3
    //      / \
    //     4   5

    struct node *root = new(1);
    root->l = new(2);
    root->r = new(3);
    root->l->l = new(4);
    root->l->r = new(5);

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}

