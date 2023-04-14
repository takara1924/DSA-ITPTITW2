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
        int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    stack<int> st;
    int res = 0;
    for(int i=0; i<n; i++) {
        while(st.size() > 0 && a[st.top()] >= a[i]) {
            int height = a[st.top()];
            st.pop();
            int width;
            if(st.size() == 0) {
                width = i;
            } else {
                width = i - st.top() - 1;
            }
            res = max(res, height * width);
        }
        st.push(i);
    }
    while(st.size() > 0) {
        int height = a[st.top()];
        st.pop();
        int width;
        if(st.size() == 0) {
            width = n;
        } else {
            width = n - st.top() - 1;
        }
        res = max(res, height * width);
    }
    cout << res << "\n";
    }
}
