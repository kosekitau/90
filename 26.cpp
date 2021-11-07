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
#define MAX_N 3001

vector<int> cof1;
vector<int> cof2;
int col[100010];
Graph g;

void dfs(int x, int c){
    if(c==0) cof1.push_back(x);
    else cof2.push_back(x);
    col[x]=c;
    for(auto nxt: g[x]){
        if(col[nxt]==-1){
            dfs(nxt, (c+1)%2);
        }
    }
}

int main(){
    int n;
    cin>>n;
    g.resize(n);
    for(int i=0;i<n;i++) col[i]=-1;
    
    for(int i=0;i<n-1;i++){
        int a, b;
        cin>>a>>b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(0, 0);

    if(cof1.size()>cof2.size()){
        for(int i=0;i<n/2;i++){
            if(i!=0) cout<<' ';
            cout<<cof1[i]+1;
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n/2;i++){
            if(i!=0) cout<<' ';
            cout<<cof2[i]+1;
        }
        cout<<endl;
    }
    return 0;
}