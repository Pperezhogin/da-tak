#pragma once

class Calculator
{
public:
    int plus(int left, int right);
    int minus(int left, int right);
};

int Calculator::plus(int left, int right)
{
    return left + right;
}

int Calculator::minus(int left, int right)
{
    return left - right;
}