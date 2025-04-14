/*
its set related problem
problem link:https://www.geeksforgeeks.org/problems/set-operations/1
Input:
N = 10
A[] = 9 8 7 4 4 2 1 1 9 8
x = 1
Output:
1 2 4 7 8 9
erased 1
2 4 7 8 9


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
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    for(auto u:st)
    {
        cout << u << " ";
    }
    cout << nl;
    int x;
    cin >> x;
    if(st.count(x))
    {
        st.erase(x);
    }
    cout << "erased " << x << nl;
    for(auto u:st)
    {
        cout << u << " ";
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