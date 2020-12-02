#include <iostream>
using namespace std;

#include<iomanip>
using std::setw;

int main()
{
    int n[10];

    for (int i = 0 ; i < 10 ; i++)
    {
        n[i] = 100 +i ;
    }

    cout << "Element"<<setw(13)<<"Value"<<endl;

    for(int j = 0 ; j < 10 ; j++ )
    {
        cout << setw(5) << j << setw(13) << n[j] <<endl;
    }

    return 0;
}