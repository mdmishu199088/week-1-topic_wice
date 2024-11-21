#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        deque<char>dq;
        for(int i=0;i<n;i++){
            char c;cin>>c;
            dq.push_back(c);
        }
        for(auto it=dq.begin();it!=dq.end();it++){
            if(*it=='W'){
                dq.pop_front();
            }
            else break;
        }
        while(true){
            auto it=dq.end();
            it--;
            if(*it=='B') break;
            else dq.pop_back();
        }
        cout<<dq.size()<<endl;
    }
    return 0;
}