#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    deque<int>d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    int ans1=0,ans2=0,mx,who=0;
    while(!d.empty()){
        int left=d.front();int right=d.back();
        mx=max(left,right);
        if(who%2 !=0) ans1+=mx;
        else ans2+=mx;
        if(mx==left) d.pop_front();
        else d.pop_back();
        who++;
    }
    cout<<ans2<<" "<<ans1;
    return 0;
}