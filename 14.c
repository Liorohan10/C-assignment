#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};

void create(struct node *head){

    printf("Enter data:");
    scanf("%d",&head->data);
    head->next = NULL;

}

void traverse(struct node* ptr)
{
    while (ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    create(head);
    traverse(head);
    return(0);
}