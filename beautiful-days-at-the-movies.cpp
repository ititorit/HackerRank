#include <bits/stdc++.h>
using namespace std;
#define _for(i,a,b) for(int i = a; i <= b; i++)
#define _ford(i,a,b) for(int i = a; i >= b; i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()

#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
#define DEBUG(x) { cout << "--> " << #x << " = " << x << '\n'; }
#define sqr(x) ((x)*(x))
#define reset(a,val) memset(a, val, sizeof(a))

#define INF         1011111111
#define EPS         (double)1e-8
#define mod         1000000007
#define PI          3.14159265358979

typedef long long ll;
typedef unsigned long long ull;

ll rev(ll n) {
    ll s(0);
    while(n) {
        s = 10*s + (n%10);
        n /= 10;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // solution starts....

    ll l, r, x;
    cin >> l >> r >> x;
    ll cnt(0);
    for(ll i = l; i <= r; i++) {
        if(abs(i-rev(i)) % x == 0) cnt++;
    }
    cout << cnt << '\n';

    // solution end....

    return 0;
}
