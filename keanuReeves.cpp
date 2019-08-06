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

void res(string s) {
    uii numData;
    int k = 0;
    for(int i = 0; i < s.length(); i++) {
        numData[s[i]-'0']++;
    }

    if(numData[0] != numData[1]) {
        cout<<1<<endl;
        cout<<s<<endl;
        return;
    }

    else {
        cout<<2<<endl;
        cout<<s[0]<<" "<<s.substr(1);
        }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int n;
    cin>>n;
    string s;
    cin>>s;
    res(s);
    return 0;
}
