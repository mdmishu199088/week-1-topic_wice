#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,string>mp,pm;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string a,b;cin>>a>>b;
        if(pm.find(a)!=pm.end()){
            mp[pm[a]]=b;
            pm[b]=pm[a];
            pm.erase(a);
        }
        else{
            mp[a]=b;
            pm[b]=a;
        }
    }
    cout<<mp.size()<<endl;
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
