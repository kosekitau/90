#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <tuple>
#include <map>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 3001

int main(){
    ll n, a, b, c;
    cin>>n>>a>>b>>c;
    
    ll ans=INF;
    for(ll i=0;i<10000;i++){
        for(ll j=0;j<10000-i;j++){
            ll dim=n-a*i-b*j;
            ll r=i+j+dim/c;
            if(dim%c!=0 || dim<0 || r>9999) continue; 
            ans=min(ans, r);
        }
    }
    cout<<ans<<endl;

    return 0;
}