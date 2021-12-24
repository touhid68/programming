/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;

///---------------------------------Brackets Expression------------------------///
/*
int is_balanced(char input[])
{
    char stack[100],last_char;
    int top=-1;
    for(int i=0; i<strlen(input); i++)
    {
        if(input[i]=='(' || input[i]=='{' || input[i]=='[')
        {
            top++;
            stack[top]=input[i];
        }

        if(top==-1)
        {
            return 0;   ///stack empty
        }
        if(input[i]==')' || input[i]=='}' || input[i]==']')
        {
            switch(input[i])
            {
            case ')':
                last_char=stack[top];
                top--;
                if(last_char!='(')
                {
                    return 0;
                }
                break;
            case '}':
                last_char=stack[top];
                top--;
                if(last_char!='{')
                {
                    return 0;
                }
                break;
            case ']':
                last_char=stack[top];
                top--;
                if(last_char!='[')
                {
                    return 0;
                }
                break;
            }

        }
    }
    if(top==-1)
        return 1;
}

int main()
{
    char input[100];
    printf("Take a string(only brackets): ");
    scanf("%s",input);
    if(is_balanced(input))
    {
        printf("%s is balanced\n",input);
    }
    else
    {
        printf("%s is not balanced\n",input);
    }
    return 0;
}
*/
