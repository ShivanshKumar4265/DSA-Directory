#include <iostream>
using namespace std;

int main()
{
	for(row = 1; row <= 5; row++){
        for(column = 0; column < row; column++){
            cout<<row;
        }
        cout<<endl;
    }

	cout<<endl;

    for(row = 1; row <= 5; row++){
        for(column = row; column >= 1; column--){
            cout<<column;
        }
        cout<<endl;
    }
}
