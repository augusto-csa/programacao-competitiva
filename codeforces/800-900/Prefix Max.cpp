#include <bits/stdc++.h>
#define pb push_back

typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        vector<int> v(n,0);
        vector<int> pf(n+1,0);
        for (auto &e:v) {cin>>e;}

        sort(v.begin(),v.end(),greater<int>());
        for (int i=1;i<=n;i++) {
            pf[i]=max(pf[i-1],v[i-1]);
        }

        ll ans=0;
        for (int &e:pf) {
            // cout<<e<<'\n';
            ans+=e;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
