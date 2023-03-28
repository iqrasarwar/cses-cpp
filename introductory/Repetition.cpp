// #include <iostream>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     char candidate = s[0];
//     int freq = 0;
//     int maxFreq = 0;
//     for (int i = 0; i < s.length(); ++i)
//     {
//         if(s[i] == candidate)
//         {
//             freq++;
//             if(freq > maxFreq) maxFreq = freq;
//         }
//         else if(s[i] != candidate)
//         {
//             freq = 1;
//             candidate = s[i];
//         }
//     }
//     cout<<maxFreq<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int maxFreq = 0, freq = 1;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            freq++;
        } else {
            maxFreq = max(maxFreq, freq);
            freq = 1;
        }
    }
    maxFreq = max(maxFreq, freq);
    cout << maxFreq;
    return 0;
}
