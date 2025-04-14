/* its set related implementation
problem link:https://www.geeksforgeeks.org/problems/c-stl-set-6-set/1
Input
2
6
a 1 a 2 a 3 b c 2 b
5
a 1 a 5 e d 5 d 2

Output
1 2 3 1 3
2 1 -1

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
    cin >> n;
    set<int> st;
   
    while(n--)
    {
        char x;
        cin >> x;
        if(x=='a')
        {
            int i;
            cin >> i;
            st.insert(i);
        }
       else if (x == 'b')
        {
            for (auto a : st)
            {
                cout << a <<" ";
            }
        }
        else if(x=='c')
        {
            int i;
            cin >> i;
            st.erase(i);
        }
        else if (x == 'd')
        {
           int i;
           cin >> i;
           if(st.count(i))
           {
               cout << "1" << " ";
           }
           else 
           {
               cout << "-1" << " ";
           }
        }
        else if(x=='e')
        {
            cout << st.size() << " ";
        }
}
cout << nl;
}

int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc;
  cin >> tc;

  for (int i = 1; i <= tc; i++)
      solve(i);
}