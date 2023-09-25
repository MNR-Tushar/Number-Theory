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
const int mx=1e7+1;

bool is_prime[mx];
vector<int>prime;
void primeGen(int n)
{
    memset(is_prime,1,sizeof(is_prime));
    is_prime[1]=0;

    for(int i=2;i<=n;i++)
    {
        for(int j=i+i;j<=n;j+=i)
        {
            is_prime[j]=0;
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(is_prime[i]==1)prime.push_back(i);
    }
}

int main()
{
    optimize();

    primeGen(2000);

    for(auto u:prime)cout << u << " ";
    cout << endl;

    return 0;
}

