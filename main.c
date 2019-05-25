#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include"stack.h"
#define N 30
int main()
{
        char infix[N],postfix[N];
        printf("Enter infix:\n");
        gets(infix);
        convert(infix,postfix);
        printf("Postfix\n");
        puts(postfix);
        return 0;
}

