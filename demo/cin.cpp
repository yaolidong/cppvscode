#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[100];
    char food[100];

    cin.get(name,100).get();
//    cin.get();
    cin.get(food,100);
    cout<<name<<" like "<<food<<endl;
    return 0;
}