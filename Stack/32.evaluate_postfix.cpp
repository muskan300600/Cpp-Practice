#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

int main(){
    string str = "231*+9-";
    stack<int> st;
        for(int i=0;i<str.length();i++)
        {
            if( str[i]>='0' && str[i] <= '9')
                st.push(str[i]-'0');
            else
            {
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop();
                if(str[i] == '+')
                    st.push(val1 + val2);
                if(str[i] == '-')
                    st.push(val1 - val2);
                if(str[i] == '*')
                    st.push(val1 * val2);
                if(str[i] == '/')
                    st.push(val1 / val2);
            
            }
        }
        cout<<st.top();
}

// int n=A.size();
//     stack<int> stk;
//     for(int i=0;i<n;i++)
//     {
//         if(A[i]=="+")
//         {
//             int y=stk.top();
//             stk.pop();
//             int x=stk.top();
//             stk.pop();
//             stk.push(x+y);
//         }
//         else if(A[i]=="-")
//         {
//             int y=stk.top(); stk.pop();
//             int x=stk.top(); stk.pop();
//             stk.push(x-y);
//         }
//         else if(A[i]=="*")
//         {
//             int y=stk.top(); stk.pop();
//             int x=stk.top(); stk.pop();
//             stk.push(x*y);
//         }
//         else if(A[i]=="/")
//         {
//             int y=stk.top(); stk.pop();
//             int x=stk.top(); stk.pop();
//             stk.push(x/y);
//         }
//         else
//         {
//             stk.push(stoi(A[i]));
//         }
//     }
//     return stk.top();