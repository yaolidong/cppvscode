// Created on 姚黎东的iPad.

#include <iostream>
#include <cstring>
using namespace std;

class Solution
{
public:
    string reverseLeftWords(string s,int n)
    {
        string res;
        for(int i = n;i<s.size();i++)
        {
            res.push_back(s[i]);
        }
        for(int i = 0;i<n;i++)
        {
            res.push_back(s[i]);
        }
        return res;
    }
};
int main()
{
    string s,res;
    int n =3;
    s = "asdfg";


    Solution str;
    res = str.reverseLeftWords(s,n);
    cout<<res<<endl;
    return 0;
}