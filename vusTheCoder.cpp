#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int n, m, k;
    cin>>n>>m>>k;
    if(n <= m && n <= k) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}
