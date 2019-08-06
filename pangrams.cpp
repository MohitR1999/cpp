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
    uci charData;
    for(char l = 'a'; l <= 'z'; l++) {
        charData[l] = 0;
    }

    for(int i = 0; i < s.length(); i++) {
        charData[s[i]]++;
    }

    for(char l = 'a'; l <= 'z'; l++) {
        if(charData[l] == 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int len;
    cin>>len;
    string word;
    cin>>word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout<<result(word);
    return 0;
}
