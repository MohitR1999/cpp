#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

vi numberGuesser(vi numbers) {
    sort(numbers.begin(), numbers.end());
    int x = numbers[0];
    int y = numbers[1];
    int z = numbers[2];
    int w = numbers[3];
    
    vi result;
    
    result.push_back(w-x);
    result.push_back(w-y);
    result.push_back(w-z);

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi numbers(4);
    for (int i = 0; i < numbers.size(); i++) {
        cin >> numbers[i];
    }
    vi finalNums = numberGuesser(numbers);
    for(int i = 0; i < finalNums.size(); i++) {
        cout<<finalNums[i]<<" ";
    }
    return 0;
}
