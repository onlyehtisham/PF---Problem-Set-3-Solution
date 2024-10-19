#include <iostream>

using namespace std;

int main()
{
    int i, n1, n2, r = 1;

    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    for ( i = 1; i <= n2; i++)
    {
        r *= n1;
    }

    cout<<"\nFirst number raised to second number = "<<r;
    return 0;
}
