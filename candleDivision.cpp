#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;
typedef vector< pair<int, int> > vpii;
typedef vector< pair<string, string> > vpss;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    unsigned long long a, b,c, sum = 0;
    while(q--) {
        cin>>a>>b>>c;
        sum += a + b + c;
        sum /= 2;
        cout<<sum<<endl;
    }
    return 0;
}





