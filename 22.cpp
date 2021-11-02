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

int main(){
    ll a, b, c;
    cin>>a>>b>>c;

    ll gc=gcd(c, gcd(a, b));
    cout<< a/gc-1 + b/gc-1 + c/gc-1 <<endl;
    return 0;
}