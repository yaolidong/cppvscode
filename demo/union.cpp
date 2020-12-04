#include <iostream>
using namespace std;

struct widget{
    int price;
    int number;
    union id
    {
        char chid[20];
        int int_id;

    }id_val;
    
};
int main()
{
    widget food;
    widget fruit;

    strcpy(food.id_val.chid,"chiken");

    food.id_val.int_id = 20;

    cout<<food.id_val.chid<<endl;
    cout<<fruit.id_val.int_id<<endl;
    return 0;
}