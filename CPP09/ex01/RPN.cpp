#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &copy)
{
    this->stack = copy.stack;
}

RPN &RPN::operator = (const RPN &copy) {
    if (this != &copy)
        this->stack = copy.stack;
    return *this;
}

RPN::~RPN(){}

bool RPN::isOperator(char ch)
{
    if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^')
      return true;
   return false;
}

bool  RPN::isOperand(char ch)
{
    if (ch >= '0' && ch <= '9')
        return true;
    return false;
}

float RPN:: scanNum(char ch)
{
    float val;
    val = static_cast<float>(ch);
    return static_cast<float>(val - '0');
}

float RPN::operation(float num1, float num2, char op)
{
    if(op == '+')
      return num2+num1;
   else if(op == '-')
      return num2 - num1;
   else if(op == '*')
      return num2 * num1;
   else if(op == '/')
      return num2 / num1;
   else if(op == '^')
      return pow(num2, num1);
   else
      return INT_MIN;
}

void RPN::pushToStack(std::string args)
{
    float num1, num2;
    std::string::iterator it;
    for (it = args.begin(); it != args.end(); it++)
    {
        if (*it == ' ')
            it++;
        if (RPN::isOperator(*it) != false)
        {
            num1 = stack.top();
            stack.pop();
            num2 = stack.top();
            stack.pop();
            stack.push(RPN::operation(num1, num2, *it));

        }
        else if (RPN::isOperand(*it) > 0){
            stack.push(RPN::scanNum(*it));
        }
        else
        {
            std::cout << "Error" << std::endl;
            _Exit(0);
        }

    }
    std::cout << stack.top() << std::endl;

}