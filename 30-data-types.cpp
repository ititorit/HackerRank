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
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    // solution starts....

    // Declare second integer, double, and String variables.
    int n;
    double m;
    string s2;
    // Read and save an integer, double, and String to your variables.
    cin >> n >> m;
    if (getline(cin >> ws, s2)) { // eat whitespace
        getline(cin, s2);
    }
    // Print the sum of both integer variables on a new line.
    cout << n+i << '\n';
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << m+d << '\n';
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + s2 << '\n';
    // solution end....

    return 0;
}
