#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=s.size();
        int b=0,B=0;
        vector<char>v;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='b')b++;
            else if(s[i]=='B')B++;
            else{
                if(b>0 && s[i]>'Z') b--;
                else if(B>0 && s[i]<'a')B--;
                else v.push_back(s[i]);

            }
        }
        reverse(v.begin(),v.end());
        for(auto x:v){
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}
