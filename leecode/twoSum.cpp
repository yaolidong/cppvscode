#include <iostream>
#include <vector>
using namespace std;


class Solution{
    int traget;
    public:
    vector<int> twoSum(vector<int> &nums,int target){
    vector<int> k;
    int account_i =0;
    for(vector<int> ::iterator i = nums.begin();i !=nums.end();i++){
        int account_j =account_i+1;
        for(vector<int> ::iterator j = i+1; j!=nums.end();j++)
        {
            
            if(*i + *j ==target)
            {
                 k.push_back(account_i);
                 k.push_back(account_j);  
            }
            account_j++;
        }
        account_i++;
    }
    return k;
    }

};
int main(){
    vector<int> vec;
    vector<int> con;
    vec.push_back(2);
    vec.push_back(11);
    vec.push_back(7);
    vec.push_back(12);

    int target = 9;

    Solution s;
    con = s.twoSum(vec,target);
    for(vector<int> ::iterator s =con.begin();s!=con.end();s++)
    {
        cout<<*s<<endl;    
    }
    return 0;
}