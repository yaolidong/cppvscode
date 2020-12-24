#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sameStr ="";
        int length_same =100;
        if(strs.size() ==1)
        {
            sameStr = strs[0];

        }
        else
        {
            vector<string>::iterator i = strs.begin();
            while(i!=strs.end())
            {
                if(length_same>(*i).size())
                {
                    length_same = (*i).size();
                    sameStr = (*i);
                }

                i++;
            }

            for(int k = 0;k<strs.size();k++)
            {
                for(int j =sameStr.size()-1;j>=0;j--)
                {
                    if(sameStr[j]!=strs[k].at(j))
                    {
                        sameStr.erase(j);
                    }
                }
            }
        }
        return sameStr;
    }
};

int main()
{
    vector<string> strs;
    string sameStr;
    int length;
    strs.push_back("cir");
    strs.push_back("car");
    // strs.push_back("ci");
    // strs.push_back("flight");
    // for(int i = 0;i< 5;i++)
    // {
    //     string str;
    //     cin>>str;
    //     strs.push_back(str);
    // }

    // vector<string>::iterator i = strs.begin();
    // while(i!=strs.end())
    // {
    //     cout<<*i<<endl;
    //     i++;
    // }

    Solution s;
    sameStr= s.longestCommonPrefix(strs);
    cout<<sameStr<<endl;

    return 0;
}