/* set related problem
problem link:https://codeforces.com/problemset/problem/469/A
InputCopy
4
3 1 2 3
2 2 4
Output
I become the guy.
Input
4
3 1 2 3
2 2 3
OutputCopy
Oh, my keyboard!


*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define nl '\n'
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ALL(v) (v).begin(), (v).end()
#define rALL(v) (v).rbegin(), (v).rend()

#define show(x) cout << #x << " : " << x << endl

void solve(int tc)
{
    set<int> st;
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++)
    {
        st.insert(i);
    }
    int p;
    cin >> p;
    while(p--)
    {
        int x;
        cin >> x;
        st.erase(x);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int y;
        cin >> y;
        st.erase(y);
    }
    if(st.empty())
    {
        cout << "I become the guy." << nl;
        
    }
    else
    {
        cout << "Oh, my keyboard!" << nl;
    }
}

int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}