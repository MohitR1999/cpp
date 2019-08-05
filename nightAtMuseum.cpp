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
#define newline "\n";

int res(string word) {
    char ref = 'a';
    int sum = 0;
    for(int i = 0; i < word.length(); i++) {
        int refpos = ref - 97;
        int currentLetterPos = word[i] - 97;
        int fr = abs(currentLetterPos - refpos);
        int br = abs(26 - fr);
        int rot = min(fr, br);
        //cout<<"Rotation: "<<rot<<endl;
        sum += rot;
        //cout<<"Sum of rotations in "<<i<<"th iteration: "<<sum<<newline;
        ref = word[i];
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    string word;
    cin>>word;
    cout<<res(word);
    return 0;
}
