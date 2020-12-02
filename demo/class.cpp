#include <iostream>
using namespace std;

class Box
{
    public :
    double height;
    double width;
    double length;

    double getvolume(void);
    void setLength(double len);
    void setWidth(double wid);
    void setHeight(double he);


};

double Box::getvolume()
{
    return height * width * length; 
}

void Box::setHeight(double he)
{
    height = he;
}
void Box::setLength(double len)
{
    length = len;
}

void Box::setWidth(double wid)
{
    width = wid;
}


int main()
{
    double v;
    Box box1;

    box1.setHeight(2.34);
    box1.setLength(3.45);
    box1.setWidth(4.56);

    v = box1.getvolume();
    cout<<"体积是"<<v<<endl;
    return 0;
}