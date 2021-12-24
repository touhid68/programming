/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/

#include <bits/stdc++.h>
using namespace std;


///[Evaluate]polish notation(infix expression);prefix expression;reverse polish notation(postfix/suffix expression)///
//-----------------------------------Postfix Evaluation-------------------------//
/*
class Stack
{
    int a[100], i=0;

public:
    void push(int x)
    {
        if(i==100)
            cout<<"Overflow"<<endl;
        a[i]=x;
        i++;
    }

    void pop()
    {
        if(i==0)
            cout<<"Underflow"<<endl;
        i--;
    }
    int top()
    {
        return a[i-1];
    }

    bool Empty()
    {
        return i==0;
    }

    int Sz()
    {
        return i;
    }
};

bool is_operator(char c)
{
    return (c=='+' || c=='-' || c=='*' || c=='/');
}

bool is_operand(char c)
{
    return (c>=48 && c<=57);
}

int kaj(char c, int op1, int op2)
{
    if(c=='+')
        return op1+op2;
    else if(c=='-')
        return op1-op2;
    else if(c=='*' )
        return op1*op2;
    else
        return op1/op2;
}

int Evaluate(string s)
{
    Stack st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ' || s[i]==',')
            continue;
        else if(is_operand(s[i]))
        {
            int tm=0;
            while(i<s.size() && is_operand(s[i]))
            {
                tm=tm*10+(s[i]-'0');
                i++;
            }
            st.push(tm);
            i--;
        }
        else if(is_operator(s[i]))
        {
            int op2= st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            int ans=kaj(s[i], op1, op2);
            st.push(ans);
        }
    }
    return st.top();
}

int main()
{
    string s;
    cout<<"enter string"<<endl;
    getline(cin, s);

    int res=Evaluate(s);
    cout<<res<<endl;
}
*/

//----------------------------------Infix To Postfix---------------------------//

/*

class Stack
{
public:
    int i=0;
    char a[100];

    void push(char  x)
    {
        a[i++]=x;
    }
    void pop()
    {
        if(i>0)
            i--;
    }
    int top()
    {
        return a[i-1];
    }
    bool Empty()
    {
        if(i==0)
            return true;
        else
            return false;
    }
};
int operatorweight(char op)
{
    int weight = -1;
    switch(op)
    {
    case '+':
    case '-':
        return  1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;

    }

}
bool IsRightAssociative(char op)
{
    if(op=='^')
        return true;
    return false;
}

int Precedence(char a, char b)
{
    int c=operatorweight(a);
    int d=operatorweight(b);
    if(c==d)
    {
        if(IsRightAssociative(a))
            return false;
        else
            return true;
    }

    if(c>d)
        return true;
    else
        return false;
}


bool IsOperand(char c)
{
    if(c >= '0' && c <= '9')
        return true;
    if(c >= 'a' && c<= 'z')
        return true;
    if(c >= 'A' && c<= 'Z')
        return true;
    return false;
}


bool IsOperator(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
        return true;

    return false;
}
string Infix_Postfix(string expression)
{

    Stack s;
    string postfix = "";
    for(int i = 0; i< expression.size(); i++)
    {


        if(expression[i] == ' ' || expression[i] == ',')
            continue;


        else if(IsOperator(expression[i]))
        {
            while(!s.Empty() && s.top() != '(' && Precedence(s.top(),expression[i]))
            {
                postfix+=s.top();
                s.pop();
            }
            s.push(expression[i]);
        }

        else if(IsOperand(expression[i]))
        {
            postfix +=expression[i];
        }

        else if (expression[i]=='(')
        {
            s.push(expression[i]);
        }

        else if(expression[i]==')')
        {
            while(!s.Empty() && s.top()!= '(')
            {
                postfix +=s.top();
                s.pop();
            }
            s.pop();
        }
    }

    while(!s.Empty())
    {
        postfix +=s.top();
        s.pop();
    }

    return postfix;
}

int main()
{
    string expression;
    cout<<"Enter Infix Expression \n";
    getline(cin,expression);
    cout<<"Postfix :   "<<Infix_Postfix(expression)<<endl;
    return 0;
}

*/
//--------------------------Infix To Prefix---------------------------------------//
/*

bool isOperator(char c)
{
	return (!isalpha(c) && !isdigit(c));
}

int getPriority(char C)
{
	if (C == '-' || C == '+')
		return 1;
	else if (C == '*' || C == '/')
		return 2;
	else if (C == '^')
		return 3;
	return 0;
}

string infixToPostfix(string infix)
{
	infix = '(' + infix + ')';
	int l = infix.size();
	stack<char> char_stack;
	string output;

	for (int i = 0; i < l; i++) {
		if (isalpha(infix[i]) || isdigit(infix[i]))
			output += infix[i];
		else if (infix[i] == '(')
			char_stack.push('(');
		else if (infix[i] == ')') {

			while (char_stack.top() != '(') {
				output += char_stack.top();
				char_stack.pop();
			}
			char_stack.pop();
		}
		else {

			if (isOperator(char_stack.top())) {
				while (getPriority(infix[i])
				<= getPriority(char_stack.top())) {
					output += char_stack.top();
					char_stack.pop();
				}

				char_stack.push(infix[i]);
			}
		}
	}
	return output;
}

string infixToPrefix(string infix)
{

	int l = infix.size();
	reverse(infix.begin(), infix.end());

	for (int i = 0; i < l; i++) {

		if (infix[i] == '(') {
			infix[i] = ')';
			i++;
		}
		else if (infix[i] == ')') {
			infix[i] = '(';
			i++;
		}
	}

	string prefix = infixToPostfix(infix);

	reverse(prefix.begin(), prefix.end());

	return prefix;
}


int main()
{
	string s = ("(a-b/c)*(a/k-l)");
	cout << infixToPrefix(s) << std::endl;
	return 0;
}



*/


