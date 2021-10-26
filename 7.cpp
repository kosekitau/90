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
    int n;
    cin>>n;

    int A[n], q;
    for(int i=0;i<n;i++) cin>>A[i];
    cin>>q;
    int B[q];
    for(int i=0;i<q;i++) cin>>B[i];

    sort(A, A+n);
    
    int ans[q];
    for(int i=0;i<q;i++){
        int idx=lower_bound(A, A+n, B[i])-A;
        if(idx==n) ans[i]=abs(B[i]-A[idx-1]);
        else if(idx==0) ans[i]=abs(B[i]-A[idx]);
        else ans[i]=min(abs(B[i]-A[idx-1]), abs(B[i]-A[idx]));
    }
    for(int i=0;i<q;i++) cout<<ans[i]<<endl;
    return 0;
}