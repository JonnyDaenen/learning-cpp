
#include<iostream>

using namespace std;

int main()
{
    unsigned int yards, feet, inches;

    cout << "enter a distance as yards, feet and inches" << endl;
    cout << "separated by spaces." << endl;

    cin >> yards >> feet >> inches;

    const unsigned int feet_per_yard {3};
    const unsigned int inches_per_foot {12};

    unsigned int total_inches {0};

    total_inches = inches;
    total_inches += inches_per_foot * feet;
    total_inches += inches_per_foot * feet_per_yard * yards;

    cout << "Total inches: " << total_inches << endl;

    return 0;
}
