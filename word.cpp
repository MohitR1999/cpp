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

string result(string s) {
    int countUpper = 0, countLower = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) >= 'A' && s.at(i) <= 'Z') {
            countUpper++;
        }

        else countLower++;
    }

    if(countLower >= countUpper) {
        for(int i = 0; i < s.length(); i++) {
            if(s.at(i) >= 'A' && s.at(i) <= 'Z') {
                s[i] += 32;
            }
        }
    }

    else {
        for(int i = 0; i < s.length(); i++) {
            if(s.at(i) >= 'a' && s.at(i) <= 'z') {
                s[i] -= 32;
            }
        }
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    string s;
    cin>>s;
    cout<<result(s);
    return 0;
}
