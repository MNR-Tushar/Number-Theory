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

int main()
{
    optimize();

    int n;
    cin>>n;

    int sq=sqrt(n);
    vector<int>v;
    for(int i=1;i<=sq;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(n/i!=i)
            {
                v.push_back(n/i);
            }

        }
    }

    sort(v.begin(),v.end());
    for(auto u:v)cout <<u << " ";
    cout << endl;



    return 0;
}

