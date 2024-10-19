#include <iostream>

using namespace std;

int main()
{
    int i, num, c = 0;

    cout<<"Enter any number: ";
    cin>>num;

    for (i = 2; i <= num -1; i++)
    {
        if (num % i == 0)
        {
            c = 1;
            break;
        }
    }

    if (c == 0)
        cout<<"\nThis number is prime";
    else
        cout<<"\nThis number is not prime";

    /*
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            c++;
    }

    if (c > 2)
        cout<<"\nThis number is not prime";
    else
        cout<<"\nThis number is prime";
    */

    return 0;
}
