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

    int n,ok=0;
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            ok=1;
            break;
        }
    }

    if(ok==0 && n!=1)cout << n << " is Prime Number"<<endl;
    else cout << n << " is Not Prime Number"<<endl;



    return 0;
}

