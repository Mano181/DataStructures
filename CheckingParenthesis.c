#include<stdio.h>
int stack[20];
int top=-1;
void push(char data){
    top++;
    stack[top]=data;
}
void pop(){
    if(top==-1){
        printf("Nothing to be removed");
    }
    else
        top--;
}
int empty(){
    if(top==-1)
        return 1;  //1-> stack empty
    else
        return 0;  //0-> stack is not empty//(a+b)*(c+d)
}
int main()
{
    char str[20];
    scanf("%s",str);
    for(int ind=0;str[ind]!='\0';ind++)
    {

        if(str[ind]=='['||str[ind]=='{'||str[ind]=='(')
                        push(str[ind]);
        else if((stack[top]=='('&&str[ind]==')')||(stack[top]=='{'&&str[ind]=='}')||(stack[top]=='['&&str[ind]==']'))
                        pop();
        else if(('a'<=str[ind]&&str[ind]<='z')||('A'<=str[ind]&&str[ind]<='Z')||str[ind]=='+'||'-'||'*'||'/')
            continue;
        else
        {
            printf("Invalid");
            return 0;
        }
    }
      if(empty())
       printf("VALID");
      else
       printf("INVALID");
}
//Alternate Program

/*#include<stdio.h>
#define N 100
char stack[N];
int indx=-1;
void push(char data){
    indx++;
    stack[indx]=data;
}
void pop(){
    if(indx==-1){
        printf("Nothing to be removed");
    }
    else
        indx--;
}
char top(){
    return stack[indx];
}
int empty(){
    if(indx==-1)
        return 1;  //1-> stack empty
    else
        return 0;  //0-> stack is not empty
}
int main(){
    char s[100];
    scanf("%s",&s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            push(s[i]);
        else{
            if(empty()){
                printf("INVALID");
                return 0;
            }else{
                char t=top();
                if(t=='(' && s[i]==')' || t=='['&&s[i]==']' || t=='{'&&s[i]=='}')
                    pop();
                else{
                    printf("INVALID");
                    return 0;
                }
            }
        }
    }
    if(empty())
        printf("VALID");
    else
        printf("INVALID");
}*/
