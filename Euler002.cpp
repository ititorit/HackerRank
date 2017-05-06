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

const ll oo = 4e16;
vector<ll> a, sum;

void init() {
    ll f1 = 1, f2 = 2, f = 0;
    
    a.push_back(2);
    sum.push_back(2);
    ll s = 2;
    while(true) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        if(f > oo) break;
        if( !(f % 2) ) {
            s += f;
            sum.push_back(s);
            a.push_back(f);
        }
    }
}

int main() {
    init();
    
    int test = read();
    while(test--) {
        ll n = read();
        int pos (upper_bound(a.begin(), a.end(), n) - a.begin());
        printf("%lld\n", sum[pos-1]);
    }
    
    return 0;
}
