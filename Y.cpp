#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    std::ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
       string s; cin >> s;
       int a[40] ={0};
       for(int i = 0; i < s.size(); i++){
           a[s[i]-'a']++;
       }
        int check = 0;
       for(int i = 0; i < s.size(); i ++){
        if(a[s[i] - 'a'] == 1){
            cout << i;
            check = 1; break;
        }
       }
       if(!check) cout << -1;
       cout << "\n";
    }
}
