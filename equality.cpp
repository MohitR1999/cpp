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

int result(string s, int k) {
    uci charData;
    for(int i = 0; i < k; i++) {
        charData['A' + i] = 0;
    }
    for(int i =0; i < s.length(); i++) {
        charData[s[i]]++;
    }
    unordered_map<char, int> :: iterator it = charData.begin();

    int min = it->second;

    for(;it!= charData.end(); it++) {
        if(it->second < min) {
            min = it->second;
        }
    }

    return min*charData.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    cout<<result(s, k);    
    return 0;
}
