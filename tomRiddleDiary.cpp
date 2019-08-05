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
typedef set<int> si;
typedef set<string> sstr;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int t;
    cin>>t;
    sstr s;
    string word;
    while(t--) {
        cin>>word;
        if(s.find(word)!=s.end()) {
            cout<<"YES\n";
            s.insert(word);
        }
        else {
            cout<<"NO\n";
            s.insert(word);
        }
    }
    return 0;
}
