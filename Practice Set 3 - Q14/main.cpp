#include <iostream>

using namespace std;

int main()
{
    int i, sum = 0, num, n;

    cout<<"How many numbers you want to enter: ";
    cin>>num;

    for (i = 1; i <= num; i++)
    {
        cout<<i<<": ";
        cin>>n;

        sum += n;
    }

    cout<<"\nSum of "<<num<<" numbers = "<<sum;
    return 0;
}
