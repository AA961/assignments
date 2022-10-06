#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int number, answer;

    cout << "Enter A Number: ";
    cin >> number;

    answer = factorial(number);

    cout << "Factorial of " << number << " is " << answer << endl;

    return 0;
}