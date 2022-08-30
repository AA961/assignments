#include <iostream>
using namespace std;
void checkingGrade(int marks)
{
    if (marks >= 80)
        cout << "Grade A,Passed. \n";
    else if (marks >= 60 && marks <= 79)
        cout << "Grade B,Passed. \n";
    else if (marks >= 50 && marks <= 59)
        cout << "Grade C.Passed. \n";
    else if (marks >= 40 && marks >= 49)
        cout << "Grade D.Passed. \n";
    else
        cout << "Grade F,Failed.";
}

int main()
{
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    checkingGrade(marks);
    return 0;
}