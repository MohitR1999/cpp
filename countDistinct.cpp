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
typedef set<char> sc;


string countDistinct(string s) {
    const string ACCEPTANCE = "CHAT WITH HER!";
    const string REJECTION = "IGNORE HIM!";

    sc details;
    for(int i = 0; i < s.length(); i++) {
        details.insert(s.at(i));
    }
    
    if(details.size() % 2 == 0) {
        return ACCEPTANCE;
    }

    return REJECTION;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    string s;
    cin>>s;
    cout<<countDistinct(s);
    return 0;
}
