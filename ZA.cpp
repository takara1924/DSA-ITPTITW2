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
        int n;
        cin >> n;
        queue<string> q;
        cout << "[";
        q.push("1"); n--;
        while(n){
            q.push(q.front() + "0");
            n--;
            if(n){
                q.push(q.front() + "1");
                n--;
            }

            cout << q.front() << ", ";
            q.pop();
        }
        while(q.size() > 1){
            cout << q.front() << ", ";
            q.pop();
        }

        cout << q.front() <<"]\n";
        
    }
}
