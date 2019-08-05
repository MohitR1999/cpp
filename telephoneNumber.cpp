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

string res(string num, int n) {
    if(n < 11) return "NO";
    for(int i = 0; i < num.length(); i++) {
        if(num.at(i) == '8') {
            int diff = num.length() - i;
            if(diff >= 11) return "YES";
        }
    }
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string num;
        cin>>num;
        cout<<res(num, n)<<endl;
    }
    return 0;
}
