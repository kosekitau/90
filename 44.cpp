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
#define MAX_N 1010

int main(){
    int n, q;
    cin>>n>>q;

    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];

    int dif=0;
    for(int i=0;i<q;i++){
        int t, x, y;
        cin>>t>>x>>y;
        x--; y--;
        int d=n-dif%n;
        if(t==1) swap(A[(x+d)%n], A[(y+d)%n]);
        else if(t==2) dif++;
        else cout<<A[(x+d)%n]<<endl;
    }
    return 0;
}