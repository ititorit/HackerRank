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

    map<string, int> note_phone;
    int n;
    cin >> n;
    string name;
    int number;
    _for(i,1,n) {
    	cin >> name >> number;
    	note_phone[name] = number;
    }
    while(cin>>name and !name.empty()) {
    	if(note_phone[name]) {
    		cout << name << '=' << note_phone[name] << '\n';
    	} else {
    		cout << "Not found\n";
    	}
    }
    
    // solution ends....
    return 0;
}
