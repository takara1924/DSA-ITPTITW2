#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef stack<int> si;
typedef stack<char> sc;
typedef deque<int> di;
typedef long long ll;
typedef queue<int> qi;
typedef queue<string> qs;
typedef unsigned long long ull;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))

bool check(int c, ll s)
{
    if(c == 0 && s == 0) return false;
    while(s){
        if((s%10) == c) return false;
        s /= 10;
    }
    return true;
}

ll solve(ll a)
{
    qi qu;
    int cnt = 1;
    qu.push(0);
    while (1)
    {
        int k = qu.size();
        int j;
        FORN(j, 1, k)
        {
            ll s = qu.front();
            for (int i = 0; i < 6; i++)
            {
                if (check(i, s))
                {
                    ll m = 10*s + i;
                    if(m > a) return cnt;
                    qu.push(m);
                    cnt++;
                }
            }
            qu.pop();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << solve(b) - solve(a-1) << "\n";

        // cout << solve(4);
    }
}
