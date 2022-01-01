/* Generated by powerful Codeforces Tool
 * You can download the binary file in here https://github.com/xalanq/cf-tool (Windows, macOS, Linux)
 * Author: Right985
 * Time: 2022-01-01 21:56:13
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5+5;
char x[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n, k;
    bool flag;
    cin >> t;
    while(t--) {
    	cin >> n;
    	x[0] = 'z' + 1;
    	flag = true;
    	for(int i = 1; i <= n; i++) {
    		cin >> x[i];
    		if (x[i] <= x[i-1] && flag) k = i;
    		else flag = false;
    	}
    	if (x[1] == x[2]) {cout << x[1] << x[1] << endl; continue;}
    	for(int i = 0; i < k; i++) cout << x[i+1];
    	for(int i = k; i > 0; i--) cout << x[i];
    	cout << endl;
    }
    return 0;
}
