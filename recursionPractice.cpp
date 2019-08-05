#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char a[50];
    for(int i = 0; i < 50; i++) {
        a[i] = i;
    }

    for(int i = 0; i < 50; i++) {
        cout<<a[i]<<endl;
    }
    return 0;
}
