#include <iostream>
using namespace std;

int main(){
    int last = 0, previous = 1, current;
    int n;
    cin>>n;
    for(int i = 2; i < n; i++)
    {
        current = previous + last;
        last = previous;
        previous = current;
    }
    cout<<current<<endl;
}
