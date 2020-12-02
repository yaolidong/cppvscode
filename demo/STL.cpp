#include <iostream>
#include <vector>
using namespace std;

int  main()
{
    vector <int> vec;

    cout<<"the vector size is "<<vec.size()<<endl;

    for(int i = 0;i < 5;i++)
    {
        vec.push_back(i);
    }

    cout<<"the new vector size is "<<vec.size()<<endl;

    for(int j = 0;j < 5;j++)
    {
        cout<<"vec["<<j<<"] is "<<vec[j]<<endl;
    }

    vector<int> ::iterator v =vec.begin();
    while (v!=vec.end())
    {
        cout<<"the value of vec is "<<*v<<endl;
        v++;
    }
    
    return 0;
}
