// https://codeforces.com/problemset/problem/119/A
// unsolved
// comments: OutRet fun + learn bool

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MXN = 2e5 + 10;
using str = string;
using db = long double;
using vll = vector<ll>;
using vi = vector<int>;
using pii = pair<int, int>;

#define endl "\n";
#define F first
#define S second
#define pb push_back
#define mp make_pair

#define Rep(i, x, y)   for (__typeof(x) i=x; i < y; i++)
#define Repi(i, x, y)  for (__typeof(x) i=x; i > y; i--)
#define vOut(v) Rep(i,0,v.size()){cout << v[i] << " ";} cout << endl;
#define Out(s)  cout << s << '\n';
#define OutRet(s)  cout << s << '\n'; return;

void solve(){
    ll a,b,n;
    cin >> a >> b >> n;
    if (!a) {OutRet(0);}
    if (!b) {OutRet(1);}

    bool moveA = true;
    while (n > 0){
       if (moveA) {
          n -= gcd(a,n) ;
       } else {
           n -= gcd(b,n);
       }
       moveA = !moveA;
    }
    int ret = moveA;
    Out(ret);
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}


/*
 * tomorrow and
 *              tomorrow and
 *                            tomorrow
 *
 * creeps in this petty pace from day to day
 *      to the last syllable of recorded time
 *          and all our yesterdays have lighted fools the way to dusty death
 *
 *          out, out, brief candle!
 */