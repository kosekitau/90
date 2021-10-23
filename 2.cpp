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

    ll cnt=0;
    for(int bit=0;bit<(1<<n);bit++){
        int lc=0, rc=0;
        bool f=true;
        for(int j=0;j<n;j++){
            if(bit&(1<<j)) rc++;
            else lc++;
            if(lc>rc) f=false;
        }
        if(lc!=rc) f=false;
        if(f){
            for(int j=n-1;j>-1;j--) {
                if(bit&(1<<j)) cout<<')';
                else cout<<'(';
            }
            cout<<endl;
        }
    }
    return 0;
}