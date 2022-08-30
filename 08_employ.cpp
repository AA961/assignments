#include <iostream>
#include <iomanip>
using namespace std;

struct employees
{
    int age, experience;
    char name[50], degree[20];
};

void displayingData(employees emp[10])
{
    cout << endl;
    for (unsigned int i = 1; i <= 50; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << emp[i].name << "\t" << emp[i].degree << "\t" << emp[i].experience << "\t" << emp[i].age << endl;
    }
    for (unsigned int i = 1; i <= 50; i++)
    {
        cout << "-";
    }
}

void gettingInput()
{
    employees employee[10];

    setw(100);
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Employee " << i + 1 << " Name: ";
        cin.getline(employee[i].name, 50);
        cout << "Enter Employee " << i + 1 << " Degree: ";
        cin.getline(employee[i].degree, 50);
        cout << "Enter Employee " << i + 1 << " Age: ";
        cin >> employee[i].age;
        cout << "Enter Employee " << i + 1 << " Experience: ";
        cin >> employee[i].experience;
    }

    displayingData(employee);
}

int main()
{
    gettingInput();
    return 0;
}
