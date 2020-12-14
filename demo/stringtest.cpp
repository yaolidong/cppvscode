#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "string";
    cout<<"the before string is "<<str<<endl;
    str.pop_back();
    cout<<"the last string is "<<str<<endl;

    return 0;
}