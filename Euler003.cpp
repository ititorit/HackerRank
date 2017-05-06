#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll read(){
    char r;
    bool start = false, neg = false;
    ll res = 0;
    while( true ) {
	r = getchar();
	if((r - '0' < 0 or r - '0' > 9) and r != '-' && !start) {
	    continue;
	}
	if((r - '0' < 0 or r - '0' > 9) and r != '-' && start) {
	    break;
	}
	if(start) res *= 10;
	    start = true;
	    if(r == '-') neg = true;
	    else res += r - '0';
    }
    if(!neg) return res;
    else return -res;
}

const ll oo = 1e16+15;

ll factorize(ll n) {
    ll maxx = -oo;
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            maxx = max(maxx, i);
            n /= i;
        }
    }
    if (n != 1) {
        maxx = max(maxx, n);
    }
    return maxx;
}

bool isP(ll n) {
    if(n < 2) return false;
    for (ll i = 2; i*i <= n; i++) if( !(n % i) ) return false;
    return true;
}

int main() {
    int test = read();
    while(test--) {
        ll n = read();
        if(isP(n)) {
            cout << n << endl;
            continue;
        }
        cout << factorize(n) << endl;
    }
    
    return 0;
}
