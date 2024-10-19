#include <iostream>

using namespace std;

int main()
{
    int sum = 0, mx, mn, cnt = 0, num;
    float avg;
    char ch;

    mx = mn = 0;
    do
    {
        cout<<"Enter any number [-1 to terminate]: ";
        cin>>num;

        if (num != -1)
        {
            sum += num;
            if (num > mx)
                mx = num;
            if (num < mn)
                mn = num;
                cnt++;
        }
    }
    while (num != -1);

    cout<<"\n\nMaximum = "<<mx;
    cout<<"\nMinimum = "<<mn;
    cout<<"\nCount of numbers = "<<cnt;
    cout<<"\nSum of numbers = "<<sum;
    cout<<"\nAverage of numbers = "<<sum / cnt;
    return 0;
}
