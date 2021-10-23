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
    ll n, l, k;
    cin>>n>>l>>k;
    
    ll A[n];
    for(int i=0;i<n;i++) cin>>A[i];

    ll left=-1, right=l+1;
    while(right-left>1){
        ll cnt=0, idx=left+(right-left)/2, pre=0;
        for(int i=0;i<n;i++){
            if(A[i]-pre>=idx && l-A[i]>=idx) {
                pre=A[i];   
                cnt++;
            }
        }
        if(cnt>=k) left=idx;
        else right=idx;
    }
    cout<<left<<endl;
    return 0;
}