#include <iostream>
#include <vector>
using namespace std;


class Solution{
    int traget;
    public:
    void twoSum(vector<int> &nums,int target){
    int account_i = 0;
    for(vector<int> ::iterator i = nums.begin();i !=nums.end();i++){
        int account_j = account_i+1;
        for(vector<int> ::iterator j = i+1; j!=nums.end();j++)
        {
            
            if(*i + *j ==target)
            {
                cout<<"nums["<<account_i<<"] is"<<*i<<", nums["<<account_j<<"] is"<<*j<<endl;
                
            }
            account_j ++;
        }
        account_i ++;
    }
    }

};
int main(){
    vector<int> vec ;
    int target = 9;
    for(int i = 0; i < 10;i++)
    {
        vec.push_back(i);
    }
    
    Solution s;
    s.twoSum(vec,target);
    return 0;
}