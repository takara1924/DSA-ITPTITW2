#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int t; cin >> t;
    while(t--){
       stack<char> st;
       string s; cin >> s;
       int n = s.size();
       int check = 1;
       for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push('(');
            }
            else{
                if(st.empty()){
                    check = 0; break;
                }
                else st.pop();
            }
       }
       if(!st.empty()) check = 0;
       check ? cout << "YES\n" : cout << "NO\n";
    }
}
