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


int cnt(int n) {
	int _cnt(0), temp = n, digit;
	while(n) {
		digit = n%10;
		if(digit) {
			if(temp % digit == 0) _cnt++;
		}
		n /= 10;
	}
	return _cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solution starts... 

    int test, n;
    cin >> test;
    while(test--) {
    	cin >> n;
    	cout << cnt(n) << '\n';
    }

    // solution end...

    return 0;
}
