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

    int n,i,num,pow;
    cin>>n>>pow;
    num = n;
    for(i=1;i<pow;i++)
    {
        num = n*num;
    }
    cout<<num<<endl;

}