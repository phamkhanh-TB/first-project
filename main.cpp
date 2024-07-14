#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for (int i=2;i<n;i++){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt !=0 ){
            cout<<i;
            if(cnt>1){
                cout<<"^"<<cnt;
            }
            if(n>i){
                cout<<"*";
            }
        }
            
        
    }
}
