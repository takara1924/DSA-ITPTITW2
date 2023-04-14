#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    stack<int> st;
    int t; cin >> t;
    while(t--){
       int a, b;
       cin >> a;
       if(a == 1){
        cin >> b; st.push(b);
       }
       else if(a == 2){
        if(!st.empty()) st.pop();
       }
       else{
        if(st.empty()) cout << "Empty!\n";
        else cout << st.top() <<endl;
       }
    }
}