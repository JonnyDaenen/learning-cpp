
#include<iostream>

using namespace std;

int main()
{
    const unsigned int feet_per_yard {3};
    const unsigned int inches_per_foot {12};

    unsigned int total_inches {0};

    cout << "enter a distance in inches" << endl;

    cin >> total_inches;

    unsigned int yards{}, feet{}, inches{};

    yards = total_inches / (inches_per_foot * feet_per_yard);
    inches = total_inches % (inches_per_foot * feet_per_yard);

    feet = inches / inches_per_foot;
    inches = inches % inches_per_foot;

    // OR:
    // feet   = total_inches / inches_per_foot;
    // inches = total_inches % inches_per_foot;
    // yards  = feet / feet_per_yard;
    // feet   = feet % feet_per_yard;

    cout << "yards: " << yards << endl;
    cout << "feet: " << feet << endl;
    cout << "inches: " << inches << endl;

    return 0;
}
