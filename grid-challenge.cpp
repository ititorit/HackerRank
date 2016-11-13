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

int main() {

    // solution starts....

	int test, n;
	bool flag;
	cin >> test;
	while(test--) {
		cin >> n;
		vector<string> s(n);
		_for(i,0,n-1) {
			cin >> s[i];
			sort(_all(s[i]));
		}
		flag = true;
		_for(i,0,n-1) {
			_for(j,1,n-1) {
				if(s[j][i] < s[j][i-1]) {
					flag = false;
					break;
				}
			}
			if(!flag) { break; }
		}
		if(!flag) {
			cout << "NO\n";
		} else { cout << "YES\n"; }
	}

    // solution end....

    return 0;
}
