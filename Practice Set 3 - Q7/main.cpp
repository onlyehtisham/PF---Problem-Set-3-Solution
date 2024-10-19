#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num, sum = 0;
    char ch;

    do
    {
        cout<<"\nEnter any number [enter -ve number to stop]: ";
        cin>>num;

        if (num >= 0)
            sum += num;
    }
    while (num >= 0);

    cout<<"\nSum of positive numbers: "<<sum;

    return 0;
}
