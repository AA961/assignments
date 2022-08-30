#include <iostream>
using namespace std;

void displayingOutput(int totalEvenNumber)
{

    if (totalEvenNumber == 5)
    {
        cout << "All Number Entered Bye User Are Even \n";
    }
    else
    {
        cout << "There Are " << totalEvenNumber << " Even Number in List \n";
    }
}

void checkingEven(int num[])
{
    int even = 0;
    for (int i = 0; i < 5; i++)
    {
        if (num[i] % 2 == 0)
        {
            even++;
        }
    }
    displayingOutput(even);
}

void takingInput()
{
    int totalNumber[5];

    cout << "Enter five numbers: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> totalNumber[i];
    }

    checkingEven(totalNumber);
}

int main()
{
    takingInput();
    return 0;
}