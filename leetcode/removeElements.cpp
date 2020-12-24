// Created on 姚黎东的iPad.

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Solution
{
    public:
    int removeElement(vector<int>& nums,int val)
    {
        int i = nums.size();
        int temp;
        for(int j = nums.size()-1;j >= 0;j--)
        {
            if(nums[j] == val)
            {
                i--;
                temp = nums[i];
                nums[i] = val;
                nums[j] = temp;
             }
        }
        return i;
    }
};
int main()
{
    vector<int>  vec;
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(5);
    int val,num_vec;
    val =3;
    Solution s;
    num_vec = s.removeElement(vec,val);
    vector<int>::iterator i = vec.begin();
    while(i !=vec.end())
    {
        cout<<*i<<" ";
        i++;
    }
    cout<<endl;
    cout<<num_vec<<endl;
    return 0;
}