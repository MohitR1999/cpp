#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int resultGen(string s) {
    int delCount = 0;

    for(int i = 0; i < s.length()-2; i++) {
        if(s[i]=='x' && s[i+1] == 'x' && s[i+2]=='x') {
            delCount++;
        }
    }
    return delCount;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int length;
    cin>>length;
    string word;
    cin>>word;
    cout<<resultGen(word);
    return 0;
}
