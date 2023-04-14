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
        string s; cin >> s; int cnt = 0;
        sc st;
        int i;
        FOR(i, 0, s.size()){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    cnt++;
                    st.push(s[i]);
                }
                else st.pop();
            }
        }

        cnt += st.size()/2;
        cout << cnt;
        
        cout << "\n";
    }
}
