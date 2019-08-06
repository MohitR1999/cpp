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

int find(string layout, char ch) {
    for(int i = 0; i < layout.length(); i++) {
        if(ch == layout[i]) {
            return i;
        }
    }
    return -1;
}

string result(string layout1, string layout2, string sequence) {
    string res = "";
    for(int i = 0; i < sequence.length(); i++) {
        if(isupper(sequence[i])) {
            char ch = sequence[i];
            ch = tolower(ch);
            int pos = find(layout1, ch);
            char ch2 = toupper(layout2[pos]);
            res += ch2;
        }

        else if (islower(sequence[i]))
        {
            char ch = sequence[i];
            int pos = find(layout1, ch);
            char ch2 = layout2[pos];
            res += ch2;
        }

        else {
            res += sequence[i];
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    string l1, l2, seq;
    cin>>l1>>l2>>seq;
    cout<<result(l1, l2, seq);
    return 0;
}
