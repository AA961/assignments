#include <iostream>
using namespace std;

float FtoC(float t)
{
    float celsius = 5 * (t - 32) / 9;
    return celsius;
}
float CtoF(float t)
{
    float fahrenheit = (9.0 / 5.0) * t + 32;
    return fahrenheit;
}
int main()
{
    float temprature, answer;
    char choice;
    cout << "Enter Choice \nF for Celsius to Fahrenheit \nC for Fahrenheit to Celsius \n";
    cin >> choice;
    if (choice == 'F' || choice == 'C')
    {
        cout << "Enter Tempraure: ";
        cin >> temprature;

        if (choice == 'F')
        {
            answer = CtoF(temprature);
            cout << temprature << "C = " << answer << "F \n";
        }
        else
        {
            answer = FtoC(temprature);
            cout << temprature << "F = " << answer << "C \n";
        }
    }
    else
        cout << "Invalid Choice \n";
}