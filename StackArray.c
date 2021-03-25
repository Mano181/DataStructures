#include<stdio.h>
int top,value,size;
int stack[10];
top=-1;
size=1;
void push(int value)
{
    if(top>size)
        printf("stack Overflow");
    else
    {
        stack[++top]=value;
        printf("%d is pushed into stack\n",value);
    }
}
void pop()
{
    if(top<0)
        printf("stack underflow");
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
    push(40);
    display();

}
