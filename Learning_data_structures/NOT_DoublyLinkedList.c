#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct DLL{
    char ch;
    struct DLL* next;
    struct DLL* prev;
}Node;

void main(){

    char character,c;
    Node* head = NULL;
    Node* ptr = head;
    printf("Enter any string: ");
    gets(str);
    while((character=getchar())!='\n'){
        printf("%s",character);
        if(head==NULL)
        {
 
            Node* new = (Node*)malloc(sizeof(Node));
            new->ch = c;
            new->prev = NULL;
            new->next=NULL;
            head = new;
        }
        else
        {
            ptr = head;
            Node* new = (Node*)malloc(sizeof(Node));
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = new;
            new->prev = ptr;
            new->ch = c;
            new->next = NULL;
        
    }}
    ptr = head;
    int flag =0;
    Node* end;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    end = ptr;
    ptr = head;
    while(ptr!=NULL){
        printf("%s",ptr->ch);
        if(strcmp(&ptr->ch,&end->ch)!=0)
        {
         \nFLAG=1;
            break;
        }
        ptr = ptr->next;
        end = end->prev;
    }

    if(flag==0)
    {
        printf("The entered string is palindrome!\n");
    }
    else
    {
        printf("The entered string is not a palindrome!\n");
    }
}