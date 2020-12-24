#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int > >& accounts) {
        vector<int> vec;
        int max = 0;
        for(int i = 0;i<accounts.size();i++)
        {
            int sum = 0;
            for(int j = 0;j<accounts[0].size();j++)
            {
                sum +=accounts[i][j];
            }
            vec.push_back(sum);
        }
        vector<int> ::iterator i = vec.begin();
        while(i !=vec.end())
        {
            if(max<*i)
            max = *i;
            i++;

        }
        return max; 
    }
};

int main()
{
    int i,j,result;
    vector<vector<int> > accounts(3);
    for(int k=0;k<3;k++)
    {
        accounts[k].resize(2);
    }

    for(i =0;i<accounts.size();i++)
    {
        for(j =0;j<accounts[0].size();j++)
        {
            accounts[i][j] = i*j;
        }
    }
    Solution s;
    result = s.maximumWealth(accounts);
    cout<<result<<endl;



    return 0;
}