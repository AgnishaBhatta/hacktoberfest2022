#include<bits/stdc++.h>
using namespace std;
void generate(vector<int> &nums, int i,vector<int> &subset,vector<vector<int>> &res)
    {
        if(i==nums.size())
        {
            res.push_back(subset);
            return;
        }
        else
        {
            generate(nums,i+1,subset,res);
            subset.push_back(nums[i]);
            generate(nums,i+1,subset,res);
            subset.pop_back();
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> res;
        
        generate(nums,0,subset,res);
        return res;
        
    }
int main(){

    vector<int> nums={1,2,3,4,5};

    vector<vector<int>> ans = subsets(nums);

    for(int i=0;i<ans.size();i++)
    {
        cout<<"[";
        for(int j=0;j<ans[i].size();j++)
        {
            if(j!=ans[i].size()-1)
            {cout<<ans[i][j]<<",";}
            else
            {
                cout<<ans[i][j];
            }
        }
        cout<<"]"<<endl;
    }
}