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
    int n, m;
    cin>>n;
    int A[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>A[i][j]; 
    cin>>m;
    
    bool con[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) con[i][j]=false; 
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        x--; y--;
        con[x][y]=true;
        con[y][x]=true;
    }
    
    int lst[n];
    for(int i=0;i<n;i++) lst[i]=i;
    int ans=INF;
    do{
        int score=0;
        bool f=true;
        score+=A[lst[0]][0];
        for(int i=1;i<n;i++){
            if(con[lst[i-1]][lst[i]]) f=false;
            score+=A[lst[i]][i];
        }
        if(f) ans=min(ans, score);
    }while(next_permutation(lst, lst+n));

    if(ans==INF) cout<<-1<<endl;
    else    cout<<ans<<endl;
    return 0;
}