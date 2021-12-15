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
#define MOD 1000000007
#define MAX_N 1010

int main(){
    int n, l;
    cin>>n>>l;
    
    ll dp[n+1];
    for(int i=0;i<=n;i++) dp[i]=0;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i>=l) dp[i]=(dp[i-1]+dp[i-l])%MOD;
        else dp[i]=dp[i-1];
    }
    cout<<dp[n]<<endl;
    return 0;
}