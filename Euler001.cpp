#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for (int i = a; i <= b; i++)
#define FORD(i,a,b) for (int i = b; i >= b; i--)
#define REP(i,a) for (int i = 0; i < a; i++)
#define REPD(i,a) for (int i = a; i > 0; i--)

#define ll long long
#define fi first
#define se second

#define inf 0x3f3f3f3f
#define linf 0x3f3f3f3f3f3f3f3fLL

#define debug(x) { cout << "---> " << #x << " = " << x << endl;  }
#define sqr(x) ((x)*(x))
#define all(x) x.begin(), x.end()

const int MN = 111;
int test;
ll val;

ll cal(ll n) {
    return ((n*(n+1)) >> 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> test;
    while(test--) {
        cin >> val;
        val--;
        ll s3 = cal(val/3)*3;
        ll s5 = cal(val/5)*5;
        ll s15= cal(val/15)*15;
        cout << s3 + s5 - s15 << endl;
    }
}
