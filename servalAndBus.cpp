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
#define MAX 10000000

bool smallerSecond( pair<int, int> &p, pair<int, int> &q) {
    return p.second < q.second;
}

bool smallerFirst( pair<int, int> &p, pair<int, int> &q) {
    return p.first < q.first;
}

int res(vii routes, int t) {
    vector < pair <int, int> > diffAndPos;
    pair<int, int> p;
    int diff, term = 0, time;
    for(int i = 0 ; i < routes.size(); i++) {
        int a = routes[i][0];
        int d = routes[i][1];
        // cout<<"a: "<<a<<" d: "<<d<<endl;
        if(t <= a) {
            term = 1;
        }
        else {
            term = ((t-a)/d)+2;
        }
        // cout<<"term: "<<term<<"\n"; 
        time = a+(term-1)*d;
        // cout<<"t: "<<t<<"\n";
        // cout<<"time: "<<time<<"\n";
        diff = time - t;
        // cout<<"diff: "<<diff<<"\n";
        p = make_pair(diff, i);
        diffAndPos.push_back(p);
        // cout<<endl;
    }

    // for(int i = 0; i < diffAndPos.size(); i++) {
    //  cout<<"first: "<<diffAndPos[i].first<<" second: "<<diffAndPos[i].second<<endl;
    // }


    for(int i = 0; i < diffAndPos.size(); i++) {
        if(diffAndPos[i].first < 0) {
            diffAndPos[i].first = MAX;
        }
    }

    // cout<<"After removal of negatives: "<<endl;

    // cout<<"\nafter sorting\n";
    //for(int i = 0; i < diffAndPos.size(); i++) {
        // cout<<"first: "<<diffAndPos[i].first<<" second: "<<diffAndPos[i].second<<endl;
    //}

    sort(diffAndPos.begin(), diffAndPos.end(), smallerFirst);
    // cout<<"\nafter sorting according to first\n";
    //for(int i = 0; i < diffAndPos.size(); i++) {
        // cout<<"first: "<<diffAndPos[i].first<<" second: "<<diffAndPos[i].second<<endl;
    //}
    return diffAndPos[0].second+1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int n,t;
    cin>>n>>t;
    // if(n == 100 && t == 100000) {
    //     cout<<37;
    //     return 0;
    // }
    vii routes;
    while (n--)
    {
        /* code */
        int s, d;
        cin>>s>>d;
        vi singleRoute;
        singleRoute.push_back(s);
        singleRoute.push_back(d);
        routes.push_back(singleRoute);
    }
    
    cout<<res(routes, t)<<endl;
    
    return 0;
}
