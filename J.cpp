#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef stack<int> si;
typedef stack<char> sc;
typedef long long ll;
typedef unsigned long long ull;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))  

int check(string s, int a, int b){
    int i; si st;
    FORN(i, a, b){
        if(s[i] == '('){
            st.push(s[i]);
        }
        if(s[i] == ')'){
            if(st.empty()) return 0;
            else st.pop();
        }
    }
    return st.empty() ? 1 : 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        sc st;

        int i, k = 1, cnt = 0;
        FOR(i, 0, s.size()){
            if(s[i] == '{') st.push(i);
            else if(s[i] == '}'){
                if(st.empty()){
                    k = 1;
                }
                else{
                    if(check(s, st.top() + 1, i - 1)){
                        cnt = max(cnt, k); k++; st.pop();
                    }
                    else{
                        while(!st.empty()) st.pop();
                    }
                }
            }
        } 
        cout << cnt << "\n";   
    }
}
