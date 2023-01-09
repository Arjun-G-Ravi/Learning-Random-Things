# include <stdio.h>
# include <stdlib.h>
# include <string.h>


typedef struct studentDetails{
    int rollNo;
    char name[20];
    int mark;
    struct studentDetails* next;
}Node;

void main(){
    // here 'head' is a pointer to the first node of the linked list
    Node *head = NULL;
    Node* new,*ptr,*ptr2;
    int ROLLNO,MARK;
    char NAME[20];
    int out = 0;
    Node* min,*prev,*temp,*start;


    while(1){ 
        printf("\n\n___________________________________");
        printf("\nCHOOSE AN OPTION\n");
        printf("1. Insert (at end)\n");
        printf("2. Delete (from end)\n");
        printf("3. Search\n");
        printf("4. Sort on the basis of roll number\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        int choice;
        printf("\nENTER YOUR CHOICE:\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                new = (Node*)malloc(sizeof(Node));
                printf("Enter the roll number:");
                scanf("%d",&ROLLNO);
                printf("Enter the name:");
                getchar();                  //To avoid line skipping
                gets(NAME);
                //puts(NAME);
                printf("Enter the mark:");
                scanf("%d",&MARK);
                new->rollNo = ROLLNO;
                strcpy(new->name, NAME);   //To update string into char array
                //puts(new->name);
                new->mark = MARK;
                if (head == NULL){
                    new->next = NULL;
                    head = new;
                }
                else{
                    ptr = head;
                    while(ptr->next != NULL){
                        ptr = ptr->next;
                    }
                    ptr->next = new;
                    new->next = NULL;
                }
                break;


            case 2:
                
                if (head == NULL){
                    printf("No element to delete");
                }
                else if (head -> next == NULL){
                    
                    ptr2 = head->next;
                    head = NULL;
                    free(ptr2);
                    
                }
                else{
                    
                    ptr = head;
                    while(ptr->next->next != NULL){
                        ptr = ptr->next;
                    }
                    ptr2 = ptr->next;
                    ptr->next = NULL;
                    free(ptr2);
                }
                break;

            case 3:
                if(head == NULL){
                    printf("No student in list");
                    continue;
                }
                printf("Enter the roll number to be searcherd:");
                int key;
                scanf("%d",&key);
                ptr = head;
                if(ptr->rollNo == key){
                    printf("Name:%s\n",ptr->name);
                    printf("Mark:%d",ptr->mark);
                    printf("\nSEARCH SUCCESSFUL");
                }
                else{
                    
                    while((ptr->next != NULL) & (ptr->rollNo != key)){
                        ptr = ptr->next;
                        
                    }
                    
                    if(ptr->rollNo == key){
                        
                        printf("Name:%s\n",ptr->name);
                        printf("Mark:%d",ptr->mark);
                        printf("\nSEARCH SUCCESSFUL");
                    }
                    
                    else{
                     
                         printf("Roll number not found ");
                    }   
                }   
                break;

            case 4: //SORT NOT WORKING
                
                start = head;

                while (start!=NULL){
                    min = start->next;
                    ptr = start;
                    while(ptr->next != NULL){
                        
                            if (ptr->next->rollNo < min->rollNo){
                                min =ptr->next;
                                prev = ptr;
                            }
                        ptr = ptr->next;
                        }
                    if(min != start->next){
                        temp = min;
                        prev->next = temp->next;
                        temp->next = start->next;
                        start->next = temp;
                    }
                start = start->next;

                    

                }



                printf("\nSorting completed\n");
                break;

            case 5:
                ptr = head;
                if (ptr == NULL){
                    printf("Empty list");
                }
                else{
                    printf("\nThe list is ----------------------------------\n\n");
                    while(ptr  != NULL){
                        printf("Roll No:%d\n",ptr ->rollNo);
                        printf("Name:%s\n",ptr ->name);
                        printf("Mark:%d\n\n",ptr ->mark);
                        ptr = ptr->next;
                    }
                    printf("-----------------------------------------------\n");
                }
                break;


            default:
                printf("Exiting\n\n");
                out = 1;
                break;
        } //Switch
    if (out == 1){
        break;
    }
    }


}
