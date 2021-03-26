#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int hash[26]={0};
    for(int i=0;s[i]!='\0';i++){
        hash[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(hash[i]>0)
            printf("%c -> %d\n",i+'a',hash[i]);
    }
}
