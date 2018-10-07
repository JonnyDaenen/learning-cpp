

#include <iostream>
using std::cout;
using std::endl;

int main()
{
        double a{1.5}, b{}, c{};
        double result {a / b};
        cout << result << endl; // inf

        cout << result + a << endl; // inf

        result = b / c;
        cout << result << endl; // nan

        cout << -a/b << endl; // -inf
        cout << -result/b << endl; // nan
}
