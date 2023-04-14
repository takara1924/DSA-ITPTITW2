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
        int n; cin >> n;
        string s; cin >> s;
        int i , cnt = 0;
        sc st;
        FOR(i, 0, n){
            if(s[i] == '('){
                st.push('(');
            }
            else{
                if(st.empty()){
                    cnt++;
                }
                else st.pop();
            }
        }
        cout << cnt << "\n";
    }
}
