#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef stack<int> si;
typedef stack<char> sc;
typedef deque<int> di;
typedef long long ll;
typedef queue<int> qi;
typedef queue<string> qs;
typedef queue<long long> qll;
typedef unsigned long long ull;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        int n; cin >> n;
        qll qu;
        // ll ans;
        qu.push(9);
        while(1){
            int k = qu.size();
            int i;
            FOR(i, 0 ,k){
                ll a = qu.front();
                if(a % n == 0){
                    ans = a;
                    break;
                }
                qu.push(10*a);
                qu.push(10*a + 9);
                qu.pop();
            }
            if(ans) break;
        }

        cout << ans << "\n";

    }
}
