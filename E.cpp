#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int t; cin >> t;
    while(t--){
       stack<int> st;
       string s; cin >> s;
       int n = s.size();
       s = ' ' + s;
       int check = 1;
       for(int i = 1; i <= n; i++){
            if(s[i] == '('){
                st.push(i); 
            }
            else{
                if(!st.empty()){
                    cout << st.top() << " " << i << endl;
                    st.pop();
                }
            }
       }
       cout << endl;
    }
}
