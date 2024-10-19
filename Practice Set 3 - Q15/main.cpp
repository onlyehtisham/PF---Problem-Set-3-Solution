#include <iostream>

using namespace std;

int main()
{
    int i, num, sum = 0, c = 0;

    for(;;)
    {
        cout<<"Enter any number [9999 to terminate]: ";
        cin>>num;

        if (num == 9999) break;

        sum += num;
        c++;
    }

    cout<<"\nAverage of numbers: "<<sum / c;
    return 0;
}
