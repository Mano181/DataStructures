#include<stdio.h>
int top,value,size;
int stack[10];
top=-1;
size=3;
void push(int value)
{

    if(top>=size)
        printf("stack Overflow\n");
    else
    {
        ++top;
        stack[top]=value;
        printf("%d is pushed into stack\n",value);
    }

}
void pop()
{
    if(top<0)
        printf("stack underflow\n");
    else
    {
        --top;
    printf("%d poped from stack\n",stack[top+1] );
    }
}
int display()
{
    int temp=top;
    while(temp>=0)
    {
        printf("%d\n",stack[temp]);
        temp--;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    display();
    push(50);
    push(60);
    display();

}
