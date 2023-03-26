#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct LLPalindome{
    char ch;
    struct LLPalindrome* next;
    struct LLPalindrome* prev;
}Node;

Node* header = NULL;
Node* end = NULL;

void first_insert(char c)
{
    Node* new = (Node*)malloc(sizeof(Node));
    new->ch = c;
    new->prev = NULL;
    new->next=NULL;
    header = new;
    end = new;
}

void insert_after_first(char c)
{
    Node* new = (Node*)malloc(sizeof(Node));
    new->ch = c;
    new->prev = end;
    new->next=NULL;
    end->next = new;
    end = new;
}


void check_palindrome()
{
    Node* ptr1 = end;
    Node* ptr=header;
    int flag=0;
    while(ptr!=NULL)
    {
        if(strcmp(&ptr->ch,&ptr1->ch)!=0)
        {
         \nFLAG=1;
            break;
        }
        ptr=ptr->next;
        ptr1=ptr1->prev;
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

void main()
{
    char character;
    printf("Enter any string: ");
    while((character=getchar())!='\n')
    {
        if(header==NULL)
        {
            first_insert(character);
        }
        else
        {
            insert_after_first(character);
        }
    }
    check_palindrome();
   
}