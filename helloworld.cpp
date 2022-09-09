#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout << "Type in two numbers\n";
    cin >> a;
    cin >> b;
    double max = (a>=b)? a:b;
    cout << "The max of the two numbers is " << max << "\n";
}