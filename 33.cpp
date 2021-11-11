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
    int h, w;
    cin>>h>>w;
    if(h==1 || w==1) cout<<h*w<<endl;
    else cout<<((h+1)/2) * ((w+1)/2)<<endl;
    return 0;
}