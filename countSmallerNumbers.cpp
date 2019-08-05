#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vi numbers(n);
        for(int i = 0; i < n; i++) {
            cin>>numbers[i];
        }

        vi smallerNumbers;

        for(int i = 0; i<numbers.size()-1; i++) {
            int countSmallNumbers = 0;
            for(int j = i+1; j < numbers.size(); j++) {
                if(numbers[j] < numbers[i]) {
                    countSmallNumbers++;
                }
            }
            smallerNumbers.push_back(countSmallNumbers);
        }
        
        smallerNumbers.push_back(0);
        for(int i = 0; i < smallerNumbers.size(); i++) {
            cout<<smallerNumbers[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
