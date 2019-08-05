#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

void towerOfHanoi(int discs, char a, char b, char c) {
    if (discs > 0) {
        towerOfHanoi(discs-1, a , c, b);
        cout<<"From "<<a<<" to "<<c<<endl;
        towerOfHanoi(discs-1, b,a,c);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}
