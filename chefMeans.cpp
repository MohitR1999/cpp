#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

void insertSpace(string& s) {
    s.append(" ");
    const int lastIndex = s.length()-2;
    int i = lastIndex;
    while (s[i] >= '0' && s[i] <= '9')
    {
        i--;
    }
    int index = i;
    for(i = lastIndex+1; i > index; i--) {
        s[i] = s[i-1];
    }
    s[i+1] = ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
    string actualWord;
    cin>>actualWord;
    insertSpace(actualWord);
    stringstream ss(actualWord);
    string word;
    int num;
    ss>>word>>num;
    if(word.length()==num) {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    
    }
    return 0;
}
