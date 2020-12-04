#include <iostream>
using namespace std;

enum color{black,yellow,red,white};

int main(){

    color bread = color(3);
    int col = yellow;

    cout<<color(3+col)<<endl;
    cout<<bread<<endl;
    return 0;

}