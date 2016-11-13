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

int bs(int a[], int n, int val) {
    int l=1,r=n,m;
    while(l<=r) {
        m=(l+r)>>1;
        if(a[m]==val) return m-1;
        else if(val>a[m]) l=m+1;
        else r=m-1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // solution starts...
    int val,n;
    cin >> val >> n;
    int a[n+1];
    _for(i,1,n) {
        cin >> a[i];
    }
    cout << bs(a,n,val);
    // solution ends...
    return 0;
}
