#include <iostream>
using namespace std;

void calculate(int firstNumber, int secondNumber, char oprator)
{
    switch (oprator)
    {
    case '+':
        cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
        break;
    case '-':
        cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
        break;
    case '/':
        cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber;
        break;
    case '*':
        cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber;
        break;

    default:
        cout << "Invalid Oprator" << endl;
    }
}

int main()
{
    int firstNumber, secondNumber;
    char oprator;
    cout << "Enter First Number, Oprator, Second Number:";
    cin >> firstNumber >> oprator >> secondNumber;
    calculate(firstNumber, secondNumber, oprator);
}