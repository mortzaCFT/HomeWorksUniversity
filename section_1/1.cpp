#include <iostream>

using namespace std;

int main()
{
    //Method_1 using cout.
    cout << "* * * *" << endl;
    cout << "* * *" << endl;
    cout << "* *" << endl;
    cout << "*" << endl; 

    //Method_2 using for loop.
    for(int i = 0; i < 5; i++)
    {
        for(int ii = 0; ii <= i; ii++)
        {
          cout << '*';
        }
        cout << endl;
    }
    return 0;
}
