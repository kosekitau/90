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

    int A[n], B[n];
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n;i++) cin>>B[i];
    
    sort(A, A+n);
    sort(B, B+n);

    ll sm=0;
    for(int i=0;i<n;i++) sm+=abs(A[i]-B[i]);
    
    cout<<sm<<endl;

    return 0;
}