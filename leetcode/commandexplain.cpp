#include<iostream>
#include<cstring>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string res;
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    command.erase(i,2);
                    command.insert(i,"o");
                }
                else
                {
                    {
                        command.erase(i,1);
                        command.erase(i+2,1);
                    }
                }
                
            }
            res.push_back(command[i]);
            
        } 

        return res;
    }
};

int main()
{
    string str,res;
    cin>>str;
    Solution s;
    res = s.interpret(str);
    cout<<res<<endl;

    return 0;
}