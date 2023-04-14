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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        qs q1, q2;
        q1.push("4");
        q1.push("7");

        int j;
        FORN(j, 1, n)
        {
            int k = q1.size();
            while (k--)
            {
                q2.push(q1.front());
                q1.push(q1.front() + '4');
                q1.push(q1.front() + "7");
                q1.pop();
            }
        }

        cout << q2.size() << "\n";
        while (!q2.empty())
        {
            cout << q2.front() << " ";
            q2.pop();
        }
        cout << "\n";
    }
}
