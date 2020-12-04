#include <iostream>
#include <cstring>
using namespace std;

struct commodity{
    int price;
    int number;
    string  name;
};

int main(){

    commodity book = {20,5,"database"};

    cout<<book.price<<endl;
    cout<<book.name<<endl;
    cout<<book.number<<endl;

    return 0;
}