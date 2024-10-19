#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    char ch;
    int num, pos, neg, zero;

    pos = neg = zero = 0;
    do
    {
        cout<<"\nEnter any number: ";
        cin>>num;

        if (num < 0)
            neg++;
        else if (num > 0)
            pos++;
        else
            zero++;

        cout<<"Do you want to continue [y/n] : ";
        //cin>>ch;
        ch = getche();
    }
    while (ch == 'y');

    cout<<"\n\nCount of positive numbers: "<<pos;
    cout<<"\nCount of negative numbers: "<<neg;
    cout<<"\nCount of zeros: "<<zero;
    return 0;
}
