#include <stdio.h>
#include <math.h>

double add(double n1, double n2)
{
    double n3 = n1 + n2;

    return n3;
}

double sub(double n1, double n2) {
    double n3 = n1 - n2;

    return n3;
}

double multi(double n1, double n2)
{
    double n3 = n1 * n2;

    return n3;
}

double div(double n1, double n2)
{
    double n3 = n1 / n2;

    return n3;
}

int main() {
    double num1, num2;

    // Test cases for add function
    num1 = 123.456;
    num2 = 789.012;
    printf("add(%lf, %lf) = %lf\n", num1, num2, add(num1, num2));

    num1 = -123.456;
    num2 = 789.012;
    printf("add(%lf, %lf) = %lf\n", num1, num2, add(num1, num2));

    num1 = 0;
    num2 = 0;
    printf("add(%lf, %lf) = %lf\n", num1, num2, add(num1, num2));

    // Test cases for sub function
    num1 = 123.456;
    num2 = 789.012;
    printf("sub(%lf, %lf) = %lf\n", num1, num2, sub(num1, num2));

    num1 = -123.456;
    num2 = 789.012;
    printf("sub(%lf, %lf) = %lf\n", num1, num2, sub(num1, num2));

    num1 = 0;
    num2 = 0;
    printf("sub(%lf, %lf) = %lf\n", num1, num2, sub(num1, num2));

    // Test cases for multi function
    num1 = 123.456;
    num2 = 789.012;
    printf("multi(%lf, %lf) = %lf\n", num1, num2, multi(num1, num2));

    num1 = -123.456;
    num2 = 789.012;
    printf("multi(%lf, %lf) = %lf\n", num1, num2, multi(num1, num2));

    num1 = 0;
    num2 = 0;
    printf("multi(%lf, %lf) = %lf\n", num1, num2, multi(num1, num2));

    // Test cases for div function
    num1 = 123.456;
    num2 = 789.012;
    printf("div(%lf, %lf) = %lf\n", num1, num2, div(num1, num2));

    num1 = -123.456;
    num2 = 789.012;
    printf("div(%lf, %lf) = %lf\n", num1, num2, div(num1, num2));

    num1 = 123.456;
    num2 = 0;
    printf("div(%lf, %lf) = %lf\n", num1, num2, div(num1, num2)); // This will cause a division by zero error

    return 0;
}