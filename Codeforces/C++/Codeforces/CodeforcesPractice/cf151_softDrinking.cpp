// https://codeforces.com/problemset/problem/151/A
// solved 7/23/23
// comments: min

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MXN = 2e5 + 10;
using str = string;
using db = long double;
using vll = vector<ll>;
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

void solve(){
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << min({k*l/nl, c*d, p/np})/n << endl;


}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}









