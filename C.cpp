#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    // stack<int> st;
    std::ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = 1;
        stack<int> st1, st2;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == m)
            {
                st1.push(a);
                m++;
            }
            else
                st2.push(a);
        }
        while (!st2.empty() && m == st2.top())
        {
            st1.push(st2.top());
            st2.pop();
            m++;
        }

        st1.size() == n ? cout << "Yes\n" : cout << "No\n";
    }
}
