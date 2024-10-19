#include <iostream>

using namespace std;

int main()
{
    int sum = 0;

    cout<<"Numbers divisible by 9 between 100 and 200"<<endl;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            cout<<i<<endl;
            sum += i;
        }
    }

    cout<<"\nSum = "<<sum;
    return 0;
}
