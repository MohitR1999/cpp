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

string result(string word) {
    int len = word.length();
    if(len <= 10) {
        return word;
    }

    int betweenNums = word.length()-2;
    char start = word[0];
    char end = word[word.length()-1];
    stringstream ss;
    ss<<start<<betweenNums<<end;
    string res = ss.str();
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int n;
    cin>>n;
    while (n--)
    {
        /* code */
        string str;
        cin>>str;
        cout<<result(str)<<endl;
    }
    
    return 0;
}
