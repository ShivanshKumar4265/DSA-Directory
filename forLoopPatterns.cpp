#include <iostream>
using namespace std;

int main(){
    // print anything multiple times

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"chungus\n";
    // }

    // check even number upto n

    // int n;
    // cin>>n;
    // for (int i = 0; i <= n; i++){
    //     if(i%2 == 0){
    //         cout<<i<<endl;
    //     }
    // }

    // print alphabets

    // for(char i = 'a'; i <= 'z'; i++)
    // {
    //     cout<<i<<endl;
    // }

    // print numbers in reverse

    // int n;
    // cin>>n;

    // for(int i = n; i>= 1; i--)
    // {
    //     cout<<i<<endl;
    // }

    // AP Series

    // for(int i = 1; i <= 100; i = i + 3)
    // {
    //     cout<<i<<endl;
    // }
    
    // Multiplication Table Program

    // int n;
    // cin>>n;
    // for(int i = 1; i<=10; i++)
    // {
    //     cout<<i*n<<endl;
    // }

    // Power of any number

    // int n,i,num,pow;
    // cin>>n>>pow;
    // num = n;
    // for(i=1;i<pow;i++)
    // {
    //     num = n*num;
    // }
    // cout<<num<<endl;

    // Sum of N natural number

    // int n, sum = 0;
    // cin>>n;
    // for(int i = 1; i<=n; i++)
    // {
    //     sum = sum+i;
    // }
    // cout<<sum<<endl;
    // // other approach
    // cout<<n*(n+1)/2<<endl;

    // Factorial of a number

    // int n;
    // cin>>n;
    // int fact = 1;
    // for (int i = 1; i <=n; i++)
    // {
    //     fact = fact*i;
    // }

    // cout<<fact<<endl;

    // Program to check prime number

    // int n;
    // cin>>n;

    // if(n<2)
    // {
    //     cout<<"Not Prime \n";
    //     return 0;
    // }
    // else
    // {
    //     for(int i = 2; i < n; i++)
    //     {
    //         if(n%i == 0)
    //         {
    //             cout<<"Not Prime \n";
    //             return 0;
    //         }
    //     }
    //     cout<<"Prime \n";
    // }

    // Fibonacci Series

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
