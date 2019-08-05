#include<bits/stdc++.h>
using namespace std;

string findOpinion(vector<int> opinions) {
    for(int i = 0; i< opinions.size(); i++) {
        if(opinions[i] == 1) {
            return "HARD";
        }
    }
    return "EASY";
}

int main() {
    int n, op;
    string result;
    vector<int> opinions;
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>op;
        opinions.push_back(op);
    }
    result = findOpinion(opinions);
    cout<<result;
    return 0;
}