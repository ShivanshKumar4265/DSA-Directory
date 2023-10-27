#include <iostream>
using namespace std;

int main()
{
	int row,column;
    	char x;
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

    cout<<endl;

    x = 'a';
    for(row = 0; row < 5; row++){
        for(column = 0; column <= row; column++){
            cout<<x;
        }
        x = x + 1;
        cout<<endl;
    }

    cout << endl;

    for(row = 5; row > 0; row--){
        for(column = 0; column < row; column++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row = 5; row >= 1; row--){
        for(column = 1; column<=row; column++){
            cout<<column;
        }
        cout<<endl;
    }
}
