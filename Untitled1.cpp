//prefix sum algorithm
#include<bits/stdc++.h>
using namespace std;
void prefix_sum(int n,vector<int>v,vector<int>&res)
{
    res.push_back(v[0]);
    for(int i=1;i<n;i++)
    {
        int x = res[i-1]+v[i];
        res.push_back(x);
    }
}
int main()
{
    // int n;
    // cin>>n;
    vector<int>v={1,1,1,1,1,1};
    int n = v.size();
    vector<int>res;
    prefix_sum(n,v,res);
    for(auto it:res)
    {
        cout<<it<<" ";
    }
}
