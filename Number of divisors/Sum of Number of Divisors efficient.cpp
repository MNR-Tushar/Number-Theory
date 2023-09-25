#include<bits/stdc++.h>
using namespace std;
#define     ll              long long int
#define     all(v)          v.begin(),v.end()
#define     Max             1000000000000000014
#define     Min             -1000000000000000014
#define     pb              push_back
#define     PI              3.1415926535897
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx= 1e6+123;

vector<int>v[mx];
int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            v[j].push_back(i);
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout << i << " Divisors = ";
        sort(v[i].begin(),v[i].end());
        for(auto u:v[i])cout << u << " ";
        cout << endl;
    }


    return 0;
}

