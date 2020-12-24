#include<iostream>
using namespace std;

class Solution{
    public:
    bool isPalindrome(int x)
    {
        int *p =new int[100];
        int i,j;
        if(x<0)
        return false;
        else
        {
            for(i = 0;x!=0;i++)
             {
                 p[i] = x%10;
                 x =x/10;
             }
             for( j =0; j<=i-j-1;j++)
             {
                if(p[j] == p[i-j-1])
                {
                }
                else
                return false;
             }
        return true;
        }
        
    }

};

int main()
{
    Solution s;
    if(s.isPalindrome(1234554321))
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    return 0;
}