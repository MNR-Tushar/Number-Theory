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
const int mx=1e6+123;

bool is_prime[mx];
vector<int>prime;
void primeGen(int n)
{

    for(int i=3; i<=n; i+=2)
        is_prime[i]=1;
    int sq=sqrt(n);
    for(int i=3; i<=sq; i++)
    {
        if(is_prime[i]==1)
        {
            for(int j=i*i; j<=n; j+=(i+i))
                is_prime[j]=0;
        }
    }






    prime.push_back(2);
    for(int i=1; i<=n; i+=2)
    {
        if(is_prime[i]==1)
            prime.push_back(i);
    }

}
int main()
{
    optimize();

    primeGen(2000);

    for(auto u:prime)
        cout << u <<" ";
    cout << endl;



    return 0;
}

