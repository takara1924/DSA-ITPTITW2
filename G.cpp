#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef stack<int> si;
typedef stack<char> sc;
typedef long long ll;
typedef unsigned long long ull;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))  

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        sc st;
        int a[n] = {0};

        int i ;
        FOR(i, 0, n){
            if(s[i] == '(') st.push(i);
            else{
                if(st.empty()) a[i] = 0;
                else{
                    a[i] = 1;
                    a[st.top()] = 1;
                    st.pop();
                }
            }
        }
        si sk;
        int cnt = 0;
        int j = -1;
        FOR(i, 0, n){
            if(a[i] == 1){
                if(j == -1 || a[j] == 0){
                    j = i;
                }
                cnt = max(cnt, i - j +1);
            }
            else{
                j = i;
            }
        }

        cnt > 0 ? cout << cnt/2 << "\n" : cout << -1 << "\n";
    }
}
