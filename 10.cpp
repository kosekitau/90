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

    int sm1[n+1], sm2[n+1];
    for(int i=1;i<=n;i++){
        int c, p;
        cin>>c>>p;
        if(c==1){
            sm1[i]=p;
            sm2[i]=0;
        }
        else{
            sm2[i]=p;
            sm1[i]=0;
        }
    }

    sm1[0]=0; sm2[0]=0;
    for(int i=1;i<=n;i++){
        sm1[i]+=sm1[i-1];
        sm2[i]+=sm2[i-1];
    }

    int q; cin>>q;
    for(int i=0;i<q;i++){
        int l, r;
        cin>>l>>r;
        cout<<sm1[r]-sm1[l-1]<<' '<<sm2[r]-sm2[l-1]<<endl;
    }
    return 0;
}