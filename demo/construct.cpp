#include <iostream>
using namespace std;
#include <cstring>

struct Books{

    public:
    void setTitle(string tit);
    string getTitle(void);
    Books();
    ~Books();

    private:
    string title;
    string auther;

};
Books::Books(){
    cout<<"the generate is build"<<endl;

}

Books::~Books(){
    cout<<"the generate is detele"<<endl;

}

void Books::setTitle(string tit)
{
    title = tit;
}
string Books::getTitle()
{
    return title;
}


int main(){
    string te;
    Books book;

    book.setTitle("yao");
    te = book.getTitle();
    cout<<te<<endl;

}