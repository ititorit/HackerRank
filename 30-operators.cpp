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
    double mealCost; 
    int tipPercent, taxPercent;
    cin >> mealCost >> tipPercent >> taxPercent;
    double tip = mealCost*(tipPercent/100.0);
    double tax = mealCost*(taxPercent/100.0);
    double total = mealCost + tip + tax;
    if(total - (int)total >= 0.5) {
    	cout << "The total meal cost is " << (int)total+1 << " dollars." << '\n';
    } else cout << "The total meal cost is " << (int)total << " dollars." << '\n';
    // solution end....

    return 0;
}
