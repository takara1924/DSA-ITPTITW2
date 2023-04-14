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
        int n; cin >> n;
        int a[100];
        a[1] = 1;
        a[2] = 2;
        int i;
        FORN(i, 3, n){
            a[i] = a[i-1] + a[i-2];
        }

        cout << a[n] << "\n";
    }
}
