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
    int h, w;
    cin>>h>>w;
    int H[h], W[w],A[h][w];
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin>>A[i][j];

    for(int i=0;i<h;i++) H[i]=0;
    for(int i=0;i<w;i++) W[i]=0;
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) H[i]+=A[i][j];
    for(int j=0;j<w;j++) for(int i=0;i<h;i++) W[j]+=A[i][j];
        
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(j!=0) cout<<' ';
            cout<<H[i]+W[j]-A[i][j];
        }
        cout<<endl;
    }

    return 0;
}