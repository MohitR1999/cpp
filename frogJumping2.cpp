#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

long int locator(long int a,long int b,long int k) {
    long int diff = a-b;
    long int pos = diff*(k/2);
    if(k%2 != 0) {
        pos += a;
    }
    return pos;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long int a, b, k;
        cin>>a>>b>>k;
        long int res = locator(a, b, k);
        cout<<res<<endl;
    }
    
    return 0;
}
