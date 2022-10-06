#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, index, number;
    cout << "Enter The Number of Element: ";
    cin >> number;
    cout << n1 << " " << n2 << " ";
    for (index = 2; index < number; index++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}