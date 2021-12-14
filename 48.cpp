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
using P = pair<ll, ll>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n, k;
    cin>>n>>k;
    int A[n], B[n], s[n*2];
    for(int i=0;i<n;i++) cin>>A[i]>>B[i];

    for(int i=0;i<n;i++){
        s[i*2]=B[i];
        s[i*2+1]=A[i]-B[i];
    }
    sort(s, s+(n*2), greater<int>());

    ll ans=0;
    for(int i=0;i<k;i++) ans+=s[i];
    cout<<ans<<endl;
    return 0;
}