#include <stdio.h>
#include<stdlib.h>

typedef struct LL{
        int exp;
        int coeff;
        struct LL* next;
    }Node;

void main(){
    int n1,n2;
    int co,ex;
    Node *head,*new,*ptr,*poly1,*poly2;

    head = NULL;
    printf("Enter number of elements for first polynomial:");
    scanf("%d",&n1);
    printf("Enter the elements in descending order of exponent:");
    for (int i = 0;i<n1;i++){
        new = (Node*) malloc(sizeof(Node));
        printf("Enter coefficient:");
        scanf("%d",&co);
        printf("Enter exponent:");
        scanf("%d",&ex);
        if (head == NULL){
            head = new;
            new->coeff = co;
            new->exp = ex;
            new->next = NULL;
            poly1 =head;
        }
        else{
            ptr = head;
            while(ptr->next !=NULL){
                ptr = ptr->next;
            }
            ptr->next = new;
            new->coeff = co;
            new->exp = ex;
            new->next = NULL;

        }

    }
    printf("Enter number of elements for first polynomial:");
    scanf("%d",&n2);
    printf("Enter the elements in descending order of exponent:");
    for (int i = 0;i<n2;i++){
        new = (Node*) malloc(sizeof(Node));
        printf("Enter coefficient:");
        scanf("%d",&co);
        printf("Enter exponent:");
        scanf("%d",&ex);
        if (head == NULL){
            head = new;
            new->coeff = co;
            new->exp = ex;
            new->next = NULL;
            poly2 = head;
        }
        else{
            ptr = head;
            while(ptr->next !=NULL){
                ptr = ptr->next;
            }
            ptr->next = new;
            new->coeff = co;
            new->exp = ex;
            new->next = NULL;
        }
    }

Node *poly3,head; //head
poly3 = NULL;
int i=0,j=0,k=0;
head = poly3;

while(poly1->next!=NULL & poly2->next!=NULL){
    if(poly1->exp == poly2->exp){
        poly3->exp = poly1->exp;
        poly3->coeff = poly1->coeff + poly2->coeff;
        poly1 = poly1->next;
        poly2 = poly2->next;
        poly3 = poly3->next;
    }
    else if(poly1->exp >poly2->exp){
        poly3->exp = poly1->exp;
        poly3->coeff = poly1->coeff ;
        poly1 = poly1->next;
        poly3 = poly3->next;
    
    }
    else{
        poly3->exp = poly2->exp;
        poly3->coeff = poly2->coeff;
        poly1 = poly1->next;
        poly3 = poly3->next;
    }
}

    while (poly1->exp >0){
        poly3->exp = poly1->exp;
        poly3->coeff = poly1->coeff ;
        poly1 = poly1->next;
        poly3 = poly3->next;
    }

    while(poly2->exp >0){
        poly3->exp = poly2->exp;
        poly3->coeff = poly2->coeff;
        poly1 = poly1->next;
        poly3 = poly3->next;
    }

while(head->next !=NULL){
    printf("%d",head->coeff);
    printf("X^");
    printf("%d",head->exp);
    printf("+");

}    
}
