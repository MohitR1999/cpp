#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

bool sortBydesc(const pair<int,int> &a, const pair<int, int> &b) {
    if(a.second == b.second) {
        return(a.first < b.first);
    }
    else return(a.second > b.second);
}

vector < pair<int,long int> > getMarks(int n) {
    vector< pair<int,long int> > res;
    for(int i = 1; i <= n; i++) {
        int a, b, c,d;
        cin>>a>>b>>c>>d;
        res.push_back(make_pair(i, a+b+c+d));
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector< pair<int,long int> > studentMarks = getMarks(n);
    sort(studentMarks.begin(), studentMarks.end(), sortBydesc);
    for(int i = 0; i < studentMarks.size(); i++) {
        if(studentMarks[i].first==1) {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
