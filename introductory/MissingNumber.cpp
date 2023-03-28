// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     long long int n;
//     cin>>n;
//     vector<int> v(n,0);
//     for (int i = 0; i < n - 1; ++i)
//     {
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     for (int i = 0; i < n - 1; ++i)
//     {
//         if(v[i+1] - 1 != v[i])
//         {
//             cout<<v[i+1] - 1;
//             return 0;
//         }
//     }
//     cout<<n;
//     return 0;
// }
#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    long long int sum = n * (n+1) / 2;
    for (int i = 1; i < n; i++) {
        long long int num;
        cin >> num;
        sum -= num;
    }
    cout << sum << endl;
    return 0;
}
