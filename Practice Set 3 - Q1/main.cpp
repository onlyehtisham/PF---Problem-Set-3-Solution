#include <iostream>

using namespace std;

int main()
{
    int i, hrs, eHrs = 0;

    for (i = 1; i <= 10; i++)
    {
        cout<<"Enter hours of employee "<<i<<" : ";
        cin>>hrs;

        if (hrs > 40)
            eHrs += hrs - 40;
    }

    cout<<"\nTotal overtime pay : Rs. "<<eHrs * 12;
    return 0;
}
