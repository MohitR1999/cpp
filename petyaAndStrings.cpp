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
typedef set< string > ss;
typedef set< int > si;
typedef set< char > sc;

int res(string s1, string s2) {
    int res = 0;
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] == s2[i]) {
            continue;
        }

        else if(s1[i] < s2[i]) {
            return -1;
        }

        else return 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    string s1, s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout<<res(s1, s2);
    return 0;
}
