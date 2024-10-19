#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num, smallest, largest;
    char ch;

    smallest = largest = 0;
    do
    {
        cout<<"\nEnter any number: ";
        cin>>num;

        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;

        cout<<"Do you want to continue [y/n]: ";
        ch = getche();
    }
    while (ch == 'y');

    cout<<"\n\nRange of list: "<<largest - smallest;
    return 0;
}
