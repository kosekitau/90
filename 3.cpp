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

    vector<int> G[n];
    
    for(int i=0;i<n-1;i++){
        int a, b;
        cin>>a>>b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }


    int st=0;
    queue<int> que;
    que.push(st);
    map<int, int> mp;
    mp[st]=0;
    int idx=0, dis=0;
    while(!que.empty()){
        int p=que.front();
        que.pop();
        for(auto nt: G[p]){
            if(mp.count(nt)) continue;    
            que.push(nt);
            mp[nt]=mp[p]+1;
            if(dis<mp[nt]){
                dis=mp[nt];
                idx=nt;
            }
        }
    }

    st=idx;
    queue<int> que2;
    que2.push(st);
    map<int, int> mp2;
    mp2[st]=0;
    int ans=0;
    while(!que2.empty()){
        int p=que2.front();
        que2.pop();
        for(auto nt: G[p]){
            if(mp2.count(nt)) continue;    
            que2.push(nt);
            mp2[nt]=mp2[p]+1;
            ans=max(ans, mp2[nt]);
        }
    }
    cout<<ans+1<<endl;
    return 0;
}