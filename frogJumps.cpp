#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int main() {
    vi Lilypads = {0,2,5,6,8,10};
    int jumps = 0, pos = 0, max = 3, destination = Lilypads[Lilypads.size()-1];
    cout<<"Before loop"<<endl;
    int i = 0;
    while( i!=Lilypads.size() ) {
        if(pos == destination) {
            break;
        }
        if(Lilypads[i] <= max + pos) {
            i++;
            continue;
        }

        else
        {
            pos = Lilypads[i-1];
            cout<<"Current position: "<<pos<<endl;
            jumps++;
            cout<<"Jumps: "<<jumps<<endl;
            i = i-1;
            cout<<"i: "<<i<<endl;
        }
        
    }
    jumps = jumps+1;
    cout<<jumps;
    return 0;
}
