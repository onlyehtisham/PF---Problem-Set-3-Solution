#include <iostream>

using namespace std;

int main()
{
    int i, num, rem, rev;

    cout<<"Enter any number: ";
    cin>>num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;

        num /= 10;
    }

    cout<<"\nReverse number: "<<rev;
    return 0;
}
