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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n;
    cin>>n;
    ll A[46], B[46], C[46];
    for(int i=0;i<46;i++) {
        A[i]=0; B[i]=0; C[i]=0;
    }
    for(int i=0;i<n;i++) {
        int a; cin>>a;
        A[a%46]++;
    }
    for(int i=0;i<n;i++) {
        int b; cin>>b;
        B[b%46]++;
    }
    for(int i=0;i<n;i++) {
        int c; cin>>c;
        C[c%46]++;
    }

    ll ans=0;
    for(int i=0;i<46;i++){
        for(int j=0;j<46;j++){
            for(int k=0;k<46;k++){
                if((i+j+k)%46==0){
                    ans+=A[i]*B[j]*C[k];
                }
            }
        }
    }
    
    cout<<ans<<endl;

    return 0;
}