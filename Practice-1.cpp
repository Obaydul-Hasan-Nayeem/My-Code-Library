#include <bits/stdc++.h>
using namespace std;

int eval(int op1, int op2, char op)
{
    switch(op)
    {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        default: return 0;
    }
}

int postfixEval(string exp)
{
    stack<int> s;

    for (int i = 0; i < exp.length(); i++)
    {
        if (isdigit(exp[i]))
        {
            int operand = 0;
            while (i < exp.length() && isdigit(exp[i]))
            {
                operand = (operand * 10) + (exp[i] - '0');
                i++;
            }
            i--;
            s.push(operand);
        }
        else
        {
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();

            int result = eval(op1, op2, exp[i]);
            s.push(result);
        }
    }
    return s.top();
}

int main()
{
    string exp;
    cin >> exp;
    cout << postfixEval(exp) << endl;
    return 0;
}
