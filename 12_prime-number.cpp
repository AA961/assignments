#include <iostream>
using namespace std;

bool checkingPrime(int n)
{
    bool isPrime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}

int main()
{
    int number;

    cout << "Enter A Number: ";
    cin >> number;

    bool prime = checkingPrime(number);

    if (prime)
    {
        cout << number << " is Prime \n";
    }
    else
    {
        cout << number << " is not Prime \n";
    }

    return 0;
}