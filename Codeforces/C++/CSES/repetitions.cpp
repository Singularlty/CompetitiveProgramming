// https://cses.fi/problemset/task/1069
// solved 7/27/23
// comments:

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
#define vOut(v) Rep(i,0,v.size()){cout << v[i] << " ";} cout << endl
#define Out(s)  cout << s << '\n'
#define OutRet(s)  cout << s << '\n'; return
#define ts(n) to_string(n)

void solve(){
    str s ;
    cin >> s;
    ll n = s.size();
    char prev = s[0];
    ll combo = 0, ma = combo;
    for (int i=1; i<n; i++){
        if (s[i] == prev){
           combo++;
           ma =  max(combo, ma);
        }
        else {
           combo = 0;
           prev = s[i];
        }
    }
    cout << ma + 1;

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    solve();

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