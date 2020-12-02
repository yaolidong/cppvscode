#include<iostream>
using namespace std;

int main(){
    int i = 7;
    int& r = i ;

    cout<<"i的值为:"<<i<<endl;
    cout<<"i的引用r的值为:"<<r<<endl;

    return 0;
}