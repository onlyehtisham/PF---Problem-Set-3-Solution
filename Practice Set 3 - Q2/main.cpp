#include <iostream>

using namespace std;

int main()
{
    int i, num, fact = 1;

    cout<<"Enter any number: ";
    cin>>num;

    for (i = num; i >= 1; i--)
    {
        fact = fact * i;
    }

    cout<<"\nFactorial : "<<fact;
    return 0;
}
