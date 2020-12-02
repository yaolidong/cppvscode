#include <iostream>
using namespace std;

#include <ctime>

int main(){

    time_t now =time(0);


   
    cout<<"秒数："<<now<<endl;


    char *dt = ctime(&now);
    cout<<"本地时间："<<dt<<endl;
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout<<"UTC时间："<<dt<<endl;

    tm *ltm = localtime(&now);

    cout<<1900+ltm->tm_year<<"年"<<endl;
    cout<<1+ltm->tm_mon<<"月"<<endl;
    cout<<ltm->tm_mday<<"日\n"<<endl;
    cout<<"时间："<<ltm->tm_hour<<":"<<ltm->tm_min<<":"<<ltm->tm_sec<<endl;
        
    return 0;
}