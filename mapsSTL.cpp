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
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //Insert your f**king code here
    int queries;
    string name;
    int marks;
    map<string, int> studentAndMarks;
    cin>>queries;
    while(queries--) {
        int num;
        cin>>num>>name;
        if(num == 1) {
            cin>>marks;
            if(studentAndMarks.find(name) != studentAndMarks.end()) {
                studentAndMarks[name] += marks;
            }
            else {
                studentAndMarks.insert(make_pair(name, marks));
            }
        }

        else if(num == 2) {
            if(studentAndMarks.find(name) != studentAndMarks.end()) {
                studentAndMarks.erase(name);
            }
        }

        else if(num == 3) {
            if(studentAndMarks.find(name) != studentAndMarks.end()) {
                cout<<studentAndMarks[name]<<endl;
            }
            else {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}


