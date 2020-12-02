#include <iostream>
using namespace std;

class Books{
    private:
    char title[100];
    char author[100];
    int book_id;
    int prince ;
    static int value;
    public:
    static int getValue(){
    return value;
    }
    Books();
    void setTitle(char tit[]);
    void setAuthor(char ar[]);
    void setID(int book_id);
    void setPrince(int pe);
    void getPrince();

};

int Books::value = 0;
Books::Books(){
    prince = 0;
}
void Books::setTitle(char tit[]){
    for (int i = 0; i<100; i++)
    title[i] = tit[i];
}
void Books::setAuthor(char ar[])
{
   for (int i = 0; i<100; i++)
    author[i] = ar[i];
}
void Books::setPrince(int pe)
{
    prince = pe;
    value = prince + value ;
}
void Books::getPrince()
{
    cout<<prince<<endl;
}

int main (){
    Books book1;
    Books book2;
    int volume = 0;
    cout<<"hello"<<endl;
    book1.setPrince(10);
    book1.getPrince();
    book2.setPrince(20);
    book2.getPrince();
    volume = Books::getValue();

    cout<<volume<<endl;
    return 0;
    }