

#include <stdio.h>
#include <string.h>

#define MAX 100	

int top=-1;
int item;



char stack[MAX];
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}

void push_Char(char item)
{
  
    if(isFull())
    {
        printf("Stack is FULL.\n");
        return;
    }
    
   
    top=top+1;
    stack[top]=item;
}
 

 char pop_Char()
{
   
    if(isEmpty())
    {
        printf("\nStack is EMPTY.\n");
        return 0;
    }

   
    item = stack[top];
    top=top-1;
    return item;
}
 






 
int main()
{
    char str[MAX];
    
    int i;
    
    printf("Enter a string: ");
    scanf("%[^\n]s",str); 
    
    for(i=0;i<strlen(str);i++)
        push_Char(str[i]);
        
    for(i=0;i<strlen(str);i++)
        str[i]=pop_Char();

    printf("String after reversal: %s\n",str);
    
    return 0;
}
 
