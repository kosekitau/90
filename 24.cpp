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
#include <numeric>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 3001

int main(){
    ll n, k;
    cin>>n>>k;

    ll asum=0, bsum=0;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        asum+=a;
    }
    for(int i=0;i<n;i++){
        ll b; cin>>b;
        bsum+=b;
    }
    ll d=asum-bsum;
    if(d<0) d*=-1;

    string ans;
    if(d<=k){
        if(k%2==d%2) ans="Yes";
        else ans="No";
    }
    else{
        ans="No";
    }
    
    cout<<ans<<endl;
    return 0;
}