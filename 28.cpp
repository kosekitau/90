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
    int n;
    cin>>n;

    int s[MAX_N][MAX_N];
    for(int i=0;i<MAX_N;i++) for(int j=0;j<MAX_N;j++) s[i][j]=0;

    for(int i=0;i<n;i++){
        int lx, ly, rx, ry;
        cin>>lx>>ly>>rx>>ry;
        s[ly][lx]+=1; s[ry][rx]+=1;
        s[ry][lx]-=1; s[ly][rx]-=1;
    }

    for(int i=0;i<MAX_N;i++) for(int j=1;j<MAX_N;j++) s[i][j]+=s[i][j-1];
    for(int j=0;j<MAX_N;j++) for(int i=1;i<MAX_N;i++) s[i][j]+=s[i-1][j];        

    int ans[n+1];
    for(int i=0;i<n+1;i++) ans[i]=0;
    for(int i=0;i<MAX_N;i++){
        for(int j=0;j<MAX_N;j++){
            if(s[i][j]>0) ans[s[i][j]]++;
        }
    }

    for(int i=1;i<n+1;i++)  cout<<ans[i]<<endl;
    

    return 0;
}