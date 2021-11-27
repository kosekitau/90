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
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int st=0, cnt=0, ans=0;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int j=0;
        while(i+j<n){
            if(mp[a[i+j]]==0) cnt++;
            if(cnt>k) break;
            mp[a[i+j]]++;
            j++;
        }
        ans=max(ans, j);
        mp[a[i]]--;
        cnt--;
        if(mp[a[i]]==0) cnt--;
        cout<<"i:"<<i<<' '<<j<<endl;
        cout<<mp[1]<<' '<<mp[2]<<' '<<mp[3]<<' '<<mp[4]<<endl;
    }
    cout<<ans<<endl;
    return 0;
}