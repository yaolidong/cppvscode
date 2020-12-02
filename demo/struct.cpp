#include <iostream>
using namespace std;
#include <cstring>

void printbook(struct Books book);

struct Books{
    char title[50];
    char auther[50];
    int book_id;
};


int main()
{
    Books book1;
    Books book2;

    strcpy(book1.auther , "yao");
    strcpy(book1.title  , "maths");
    book1.book_id = 12345;

    strcpy(book2.auther , "hu");
    strcpy(book2.title  , "english");
    book2.book_id = 54321;

    printbook(book1);
    printbook(book2);



    struct Books *points;

    points = &book1;

    cout<<points->auther<<endl;
    cout<<points->book_id<<endl;
    cout<<points->title<<endl;

    return 0;


}

void printbook(struct Books book)
{
    cout<<"作者是"<<book.auther<<endl;
    cout<<"标题是"<<book.title<<endl;
    cout<<"ID是"<<book.book_id<<endl;
}