/* Generated by powerful Codeforces Tool
 * You can download the binary file in here https://github.com/xalanq/cf-tool (Windows, macOS, Linux)
 * Author: Right985
 * Time: 2021-12-26 20:32:02
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
    	cin >> s;
    	cout << (count(s.begin(), s.end(), 'N') == 1 ? "NO\n" : "YES\n");
    }
    return 0;
}
