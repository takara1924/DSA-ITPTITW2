#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int t; cin >> t;
    while(t--){
       ull n; cin >> n;
       stack<int> st;
       while(n){
        st.push(n%2);
        n/=2;
       }
        //11
       while(!st.empty()){
        cout << st.top(); st.pop();
       }
       cout << endl;
    }
}