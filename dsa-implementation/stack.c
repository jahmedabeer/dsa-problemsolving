/*
    implementing stack using array
*/

#include <stdio.h>
#define capacity 5

int stack[capacity]; // book shelf
int top = -1; // book

// add value to stack
void push(int x)
{
    ( top < capacity - 1 ) ? stack[++top] = x : printf("Exception! No space\n");
    
    // -1 < 4 -> true ? stack[-1+1 = 0 index] = 10(x) | [ ++top -> top = top +1 ]
    // -1 < 3 -> true ? stack[0+1 = 1 index] = 20(x)
    //last - 5: -1 < 0 -> true
}

// remove value from stack
int pop()
{
    ( top >= 0 ) ? stack[--top] : printf("Exception From Pop! Empty Stack\n"); return - 1;
}

// return value from stack
int peek()
{
    if( top >= 0 ) 
        return stack[top];
    printf("Exception From Pop! Empty Stack\n"); 
    return - 1;
}

// reverse stack value
void display(){
    for(int i = top; i > -1; i=i-1)
        printf("%d ", stack[i]);
    // i = 0; 0 > -1(true); 0 = 0 - 1 -> printf(stack[0])
}


int main()
{
    push(20);push(100);
    printf("Peek:%d \n", peek());
    pop();
    
    printf("Displaying elements of the stack: \n");
    display();

    return 0;
}