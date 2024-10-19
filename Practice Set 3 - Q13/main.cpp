#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i, sumE, sumO, num;
    char ch;

    sumE = sumO = 0;
    do
    {
        cout<<"\nEnter any number: ";
        cin>>num;

        if (num % 2 == 0)
            sumE += num;
        else
            sumO += num;

        cout<<"Do you want to continue [y/n]: ";
        ch = getche();
    }
    while (ch == 'y' || ch == 'Y');

    cout<<"\n\n Sum of Even numbers: "<<sumE;
    cout<<"\nSum of Odd numbers: "<<sumO;
    return 0;
}
