#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;
typedef vector< pair<int, int> > vpii;
typedef vector< pair<string, string> > vpss;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    //Insert your f**king code here
    int n;
    scanf("%d", &n);
    vector<unsigned int> numbers(n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int q;
    scanf("%d", &q);
    while(q--) {
        unsigned int y;
        scanf("%d", &y);
        vector<unsigned int> :: iterator it;
        it = find(numbers.begin(), numbers.end(), y);
        if(it!= numbers.end()) {
            printf("Yes %d\n", it-numbers.begin()+1);
            //cout<<"Yes "<<it - numbers.begin()+1<<endl;
        } 
        else {
            it = lower_bound(numbers.begin(), numbers.end(), y);
            printf("No %d\n", it-numbers.begin()+1);
            //cout<<"No "<<it - numbers.begin() +1<<endl;
        }
    }
    return 0;
}
