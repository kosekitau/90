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
    ll a, b;
    cin>>a>>b;

    ll bg=b/gcd(a, b);
    if(bg>1000000000000000000/a) cout<<"Large"<<endl;
    else cout<<a*bg<<endl;
    return 0;
}