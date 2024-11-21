#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<pair<string,string>,bool>mp;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        mp[make_pair(a,b)]=true;
    }
    cout<<mp.size();
    return 0;
}
