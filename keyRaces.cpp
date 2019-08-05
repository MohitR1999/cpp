#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

string determiner(int s, int v1, int v2, int t1, int t2) {
    int playerOneTime = 2*t1 + s * v1;
    int playerTwoTime = 2*t2 + s * v2;
    //cout<<playerOneTime<<" "<<playerTwoTime;
    if(playerOneTime > playerTwoTime) {
        return "Second";
    }

    else if (playerTwoTime > playerOneTime)
    {
        return "First";
    }

    else {
        return "Friendship";
    }
}

int main() {
    int s, v1, v2, t1, t2;
    cin>>s>>v1>>v2>>t1>>t2;
    string result = determiner(s, v1, v2, t1, t2);
    cout<<result;
    return 0;
}
