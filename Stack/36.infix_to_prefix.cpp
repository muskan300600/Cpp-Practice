#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

// int prec(char ch)
// {
//     if (ch == '+' || ch == '-')
//     {
//         return 1;
//     }
//     else if (ch == '*' || ch == '/')
//     {
//         return 2;
//     }
//     else
//     {
//         return -1;
//     }
// }

// string toPostfix(string str)
// {
//     str = '(' + str + ')';
//         stack<char> s;
//     string result;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z'|| (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
//             result=result+str[i];
//         else if (str[i] == '(')
//             s.push(str[i]);
        
//         else if(str[i]==')'){
//             while(s.top()!='('){
//                 result = result+s.top();
//                 s.pop();
//             }
//             s.pop();
//         }
//         else{
//             while(!s.empty() && prec(str[i])<=prec(s.top())){
//                 result = result+s.top();
//                 s.pop();
//             }
//             s.push(str[i]);
//         }
//     }

//     while(!s.empty()){
//         result = result+s.top();
//         s.pop();
//     }

//     return result;
// }

// string toPrefix(string str)
// {
//     reverse(str.begin(), str.end());
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == '(')
//         {
//             str[i] == ')';
//             i++;
//         }
//         else if (str[i] == ')')
//         {
//             str[i] = '(';
//             i++;
//         }
//     }
//     string prefix = toPostfix(str);
//     reverse(prefix.begin(), prefix.end());

//     return prefix;
// }

// int main()
// {
//     string str = "(A-B/C)*(A/K-L)";
//     cout<<toPrefix(str);
// }

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
 
        // If the scanned character is an
        // operand, add it to output.
        if (isalpha(infix[i]) || isdigit(infix[i]))
            output += infix[i];
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (infix[i] == '(')
            char_stack.push('(');
 
        // If the scanned character is an
        // ‘)’, pop and output from the stack
        // until an ‘(‘ is encountered.
        else if (infix[i] == ')') {
            while (char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }
 
            // Remove '(' from the stack
            char_stack.pop();
        }
 
        // Operator found
        else
        {
            if (isOperator(char_stack.top()))
            {
                if(infix[i] == '^')
                {
                      while (getPriority(infix[i]) <= getPriority(char_stack.top()))
                       {
                         output += char_stack.top();
                         char_stack.pop();
                       }
                     
                }
                else
                {
                    while (getPriority(infix[i]) <= getPriority(char_stack.top()))
                       {
                         output += char_stack.top();
                         char_stack.pop();
                       }
                     
                }
 
                // Push current Operator on stack
                char_stack.push(infix[i]);
            }
        }
    }
      while(!char_stack.empty()){
          output += char_stack.top();
        char_stack.pop();
    }
    return output;
}
 
string infixToPrefix(string infix)
{
    /* Reverse String
     * Replace ( with ) and vice versa
     * Get Postfix
     * Reverse Postfix  *  */
    int l = infix.size();
 
    // Reverse infix
    reverse(infix.begin(), infix.end());
 
    // Replace ( with ) and vice versa
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
 
    // Reverse postfix
    reverse(prefix.begin(), prefix.end());
 
    return prefix;
}
 
// Driver code
int main()
{
    string s = ("x+y*z/w+u");
    cout << infixToPrefix(s);
    return 0;
}