#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
       stack<int> st;
       string s; cin >> s;
       int n = s.size();
       int k = 1;
       int a[n];
       for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push(i);
                a[i] = k; k++; 
            }
            else{
                if(!st.empty()){
                    a[i] = a[st.top()];
                    st.pop();
                }
            }
       }
       for(int i = 0; i < n; i++) cout << a[i] <<" ";
       cout << "\n";
    }
}
