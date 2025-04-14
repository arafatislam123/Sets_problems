/*
set related problem
problem link:https://codeforces.com/contest/22/problem/A
InputCopy
4
1 2 2 -4
OutputCopy
1
InputCopy
5
1 2 3 1 1
OutputCopy
2



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
    int n;
    cin>>n;
    set<int> st;

    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        st.insert(x);

    }
    int cnt = 0;
    auto it = st.begin();
    auto it2 = st.upper_bound(*it);
    cout << *it2 << nl;
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