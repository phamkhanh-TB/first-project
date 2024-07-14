#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp ;
    int n;cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        mp[v[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[v[i]!=0]){
             cout<<v[i]<<" "<<mp[v[i]]<<endl;
             mp[v[i]]=0;
        }
    }
}