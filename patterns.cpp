#include <iostream>
using namespace std;

int main()
{
    int row,column;

    for(row = 0; row < 5; row++)
    {
        for(column = 0; column < 5; column++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row = 0; row < 4; row++)
    {
        for(column = 0; column < 5; column++)
        {
            cout<<10<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row = 1; row <= 5; row++)
    {
        for(column = 0; column < 5; column++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row = 0; row < 5; row++)
    {
        for(column = 1; column <= 5; column++)
        {
            cout<<column<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row = 0; row < 5; row++)
    {
        for(column = 5; column>=1; column--)
        {
            cout<<column<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row = 0; row < 5; row++)
    {
        for(column = 1; column <=5; column++)
        {
            cout<<column*column<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    char x = 'a';

    for(row = 0; row < 5; row++)
    {
        for(column = 0; column < 5; column++)
        {
            cout<<x<<" ";
        }
        x++;
        cout<<endl;
    }

    cout<<endl;

    for(row = 0; row < 5; row++){
        for(x = 'a'; x<='e'; x++){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int count = 1;
    for(row = 0; row < 5; row++){
        for(column = 0; column < 5; column++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}