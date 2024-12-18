#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cmath>
#include <climits>


class RPN{
    private:
        std::stack<float> stack;


    public:
        RPN();
        RPN(const RPN &copy);
        RPN &operator = (const RPN &copy);
        ~RPN();

        void pushToStack(std::string args);
        bool isOperator(char ch);
        bool isOperand(char ch);
        float scanNum(char ch);
        float operation(float num1, float num2, char op);


};

#endif