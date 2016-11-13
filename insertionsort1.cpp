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

void insertion_sort(int a[], int n) {
	int temp = a[n];
	_ford(i,n-1,1) {
		if(a[i] > temp) {
			a[i+1] = a[i];
		} else {
			a[i+1] = temp;
			break;
		}
		_for(i,1,n) { cout << a[i] << ' '; }
	}
	if(a[1] > temp) {
		a[1] = temp;
	}
	_for(i,1,n) { cout << a[i] << ' '; }
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    // solution starts....
    int n;
    cin >> n;
    int a[n+1];
    _for(i,1,n) {
    	cin >> a[i];
    }
    insertion_sort(a, n);
    // solution end....

    return 0;
}
