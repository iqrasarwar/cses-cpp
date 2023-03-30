#include <iostream>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll last = 0;
    ll s = 0;
    cin>>last;
    ll curr =0;
    for (ll i = 1; i < n; ++i)
    {
        cin>>curr;
        if(curr < last)
            {
                s += abs(last-curr);
                curr += abs(last-curr);
            }
        last = curr;
    }
    cout<<s<<"\n";
    return 0;
}
