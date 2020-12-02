#include <iostream>
using namespace std;
#include <string>

template <typename T>
inline T const& Max(T const& a,T const& b)
{
    return (a>b?a:b);
} 

int main(){

    int i = 3;
    int j = 4;
    cout<<Max(i,j)<<endl;

    double q = 2.58;
    double p = 2.43;
    cout<<Max(q,p)<<endl;

    string a = "Hello";
    string b = "World";

    cout<<Max(a,b)<<endl;

    return 0;
}