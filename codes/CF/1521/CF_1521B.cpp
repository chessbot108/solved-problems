//here take a cat
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <utility>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>
#include <queue>
#include <set>

#define ll long long
#define lb long double
#define moorz multiset
#define apple multimap
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define ins insert
#define cont continue
#define pow2(n) (1 << (n))

#define LC(n) (((n) << 1) + 1)
#define RC(n) (((n) << 1) + 2)
#define add(a, b) (((a)%mod + (b)%mod)%mod)
#define mul(a, b) (((a)%mod * (b)%mod)%mod)
#define init(arr, val) memset(arr, val, sizeof(arr))
#define bckt(arr, val, sz) memset(arr, val, sizeof(arr[0]) * (sz))
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
#define tern(a, b, c) ((a) ? (b) : (c))
#define feq(a, b) (fabs(a - b) < eps)

#define pbenq priority_queue
#define moo printf
#define oom scanf
#define mool puts("") 
#define loom getline
#define orz assert
//what if using geniousities in my macros
//will boost my chances at ac?
//might as well try it out

const lb eps = 1e-9;
const ll mod = 1e9 + 7;
const int MX = 2e5 +10, int_max = 0x3f3f3f3f;

using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
int arr[MX], n;
int main(){
  cin.tie(0) -> sync_with_stdio(0);
  int T; cin >> T;
  while(T--){
    cin >> n;
    bckt(arr, 0, n+2);
    int m = 1;
    for(int i = 1; i<=n; i++){
      cin >> arr[i];
      if(arr[i] < arr[m]) m = i;
    }
    if(n == 1){
      moo("0\n"); cont;
    }
    moo("%d\n", n - 1);
    for(int i = 1; i<=n; i++){
      if(i == m) cont;
      moo("%d %d %d %d\n", m, i, arr[m], arr[m] + ((m + n + n - i)%2));
    }

    //if(m != 2) moo("%d 2 %d %d\n", m, arr[m] + (m%2), arr[m]);
    //else moo("%d 1 %d %d\n", m, arr[m] + 1, arr[m] + 4);
  } 
  return 0;
}


