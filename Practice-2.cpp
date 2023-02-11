#include <bits/stdc++.h>

using namespace std;

int evaluatePostfix(string expression)
{
    stack<int> operand_stack;

    for (int i = 0; i < expression.length(); i++)
    {
        if (isdigit(expression[i]))
        {
            int operand = 0;
            while (i < expression.length() && isdigit(expression[i]))
            {
                operand = (operand * 10) + (expression[i] - '0');
                i++;
            }
            i--;
            operand_stack.push(operand);
        }
        else
        {
            if (operand_stack.empty())
            {
                cout << "Invalid expression" << endl;
                exit(0);
            }
            int operand2 = operand_stack.top();
            operand_stack.pop();
            if (operand_stack.empty())
            {
                cout << "Invalid expression" << endl;
                exit(0);
            }
            int operand1 = operand_stack.top();
            operand_stack.pop();

            switch (expression[i])
            {
            case '+':
                operand_stack.push(operand1 + operand2);
                break;
            case '-':
                operand_stack.push(operand1 - operand2);
                break;
            case '*':
                operand_stack.push(operand1 * operand2);
                break;
            case '/':
                if (operand2 == 0)
                {
                    cout << "Division by zero error" << endl;
                    exit(0);
                }
                operand_stack.push(operand1 / operand2);
                break;
            default:
                cout << "Invalid expression" << endl;
                exit(0);
                break;
            }
        }
    }
    if (operand_stack.size() != 1)
    {
        cout << "Invalid expression" << endl;
        exit(0);
    }
    return operand_stack.top();
}

int main()
{
    string expression;
    cin >> expression;
    cout << evaluatePostfix(expression) << "\n";
    return 0;
}
