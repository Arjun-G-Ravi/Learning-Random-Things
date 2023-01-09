int stack[30],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void main(){

    top=-1;
    printf(" Enter the size of STACK:");
    scanf("%d",&n);
    printf("\n OPTIONS:");
    printf("\n 1.PUSH");
    printf("\n 2.POP");
    printf("\n 3.DISPLAY");
    while(1){
        printf("\nCHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            default:{
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }      
        }
    }
}    
void push(){
    if(top>=n-1){
        printf("\n***STACK OVERFLOW***\n");
    }
    else{
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top<=-1){
        printf("\n***STACK UNDERFLOW***\n");
    }
    else{
        printf("\n\t The popped element is %d",stack[top]);
        top--;
    }
}
void display(){
    if(top>=0)    {
        printf("The elements in STACK: \n");
        for(i=top; i>=0; i--)
            printf("%d\n",stack[i]);
        
    }
    else{
        printf("\n The STACK is empty");
    }
   
}