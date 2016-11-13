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

#define condition_1 (a[i][j] > a[i-1][j] && a[i][j] > a[i][j-1])
#define condition_2 (a[i][j] > a[i+1][j] && a[i][j] > a[i][j+1])

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // solution starts...
    int n;
    cin >> n;
    char a[n+1][n+1];
    _for(i,1,n) _for(j,1,n) {
        cin >> a[i][j];
    }
    _for(i,2,n-1) {
        _for(j,2,n-1) {
            if(condition_1 && condition_2) {
                a[i][j] = 'X';
            }
        }
    }
    _for(i,1,n) {
        _for(j,1,n) {
            cout << a[i][j];
        }
        cout << '\n';
    }
    // solution ends...
    return 0;
}
