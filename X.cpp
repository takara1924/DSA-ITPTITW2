#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    // stack<int> st;
    std::ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        deque<char> dq;

        for(char c : s){
            if(c == '*'){
                if(!dq.empty()) dq.pop_back();
            }
            else dq.push_back(c);
        }

        while(!dq.empty()){
            cout << dq.front();
            dq.pop_front();
        }
        cout << "\n";
    }
}
