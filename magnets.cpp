#include <bits/stdc++.h>
using namespace std;

int groups(vector<string> magnets) {
    int no_of_divs = 0;
    for(int i = 0; i<magnets.size()-1; i++) {
        if(magnets[i]!= magnets[i+1]){
            no_of_divs++;
        }
    }
    return no_of_divs+1;
}

int main() {
    int n;
    cin>>n;
    vector<string> magnets;
    string magnet;
    for(int i = 0; i<n; i++){
        cin>>magnet;
        magnets.push_back(magnet);
    }
    int result = groups(magnets);
    cout<<result;
    return 0;
}