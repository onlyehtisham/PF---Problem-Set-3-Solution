#include <iostream>

using namespace std;

int main()
{
    int i, num, rem, sum = 0;

    cout<<"Enter any number: ";
    cin>>num;

    while (num != 0)
    {
        rem = num % 10;
        sum += rem;

        num /= 10;
    }

    cout<<"\nSum of digits: "<<sum;
    return 0;
}
