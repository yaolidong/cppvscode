class Solution {
// public:
//     int maximumWealth(vector<vector<int> >& accounts) {
//         vector<int> vec;
//         int max;
//         for(int i = 0;i<accounts.size();i++)
//         {
//             int sum = 0;
//             for(int j = 0;j<accounts[0].size();j++)
//             {
//                 sum +=accounts[i][j];
//             }
//             vec.push_back(sum);
//         }
//         vector<int> ::iterator i = vec.begin();
        
//         while(i !=vec.end())
//         {
//             if(max<*i)
//             max = *i;

//         }
//         return max; 
//     }
// };