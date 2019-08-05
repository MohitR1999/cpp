#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

string decipher(string t) {
    int i, k;
    string temp = "";
    for(i = 0, k = 0; (i) < t.length();) {
        cout<<"Pushing: "<<i+k<<" th element, "<<t[i+k]<<endl; 
        temp += t[i+k];
        k++;
        i+=k;
    }
    return temp;
}

int main() {
    int num;
    cin>>num;
    string t;
    cin>>t;
    string n = decipher(t);
    cout<<n;
    return 0;
}
