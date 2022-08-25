#include <iostream>
#include <string>
using namespace std;

// Declare a structure named "car"
struct car
{
    string name;
    string ownerId;
    string horsePower;
    string vendor;
    int price;
    int model;
};

int main()
{

    // #Getting Input from User and storing it in Car Structure
    car myCar;
    cout << "Enter Car Name:" << endl;
    cin >> myCar.name;
    cout << "Enter Car Model:" << endl;
    cin >> myCar.model;
    cout << "Enter Car Vendor:" << endl;
    cin >> myCar.vendor;
    cout << "Enter Car Horse Power:" << endl;
    cin >> myCar.horsePower;
    cout << "Enter Car Price:" << endl;
    cin >> myCar.price;
    cout << "Enter Car Owner ID:" << endl;
    cin >> myCar.ownerId;
    cout << "Data Has been Saved" << endl;

    // Displaying Data in Structure Car
    cout << "The store Vahicle Information Is:" << endl;
    cout << "Name:" << myCar.name << endl;
    cout << "Model:" << myCar.model << endl;
    cout << "Vendor:" << myCar.vendor << endl;
    cout << "Price:" << myCar.price << endl;
    cout << "Engine Power:" << myCar.horsePower << endl;
    return 0;
}