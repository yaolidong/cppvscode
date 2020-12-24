#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vec;
        vector<int> ::iterator i = nums.begin();
        
        while(i!= nums.end()) 
        {
            int sum = 0;
            vector<int> ::iterator j ;
            for( j = i; j >=nums.begin();j--)
            {
                sum +=*j;
            }
            vec.push_back(sum);
            i++;

        } 
        return vec;

    }
};

int main()
{
    vector<int> nums;
    vector<int> res;
    for(int i = 1;i<5;i++)
    {
        nums.push_back(i);
    }
    vector<int> ::iterator i = nums.begin();
    while(i!=nums.end())
    {
        cout<<*i<<" ";
        i++;
    }

    cout<<endl;

    Solution s;

    res = s.runningSum(nums);
    
    vector<int> ::iterator j = res.begin();
    while(j!=res.end())
    {
        cout<<*j<<" ";
        j++;
    }


    return 0;
}