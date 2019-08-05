#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
vi vec[100]; 
vector<vi> vec2(100);
unordered_map<char,int> mp;
unordered_set<int> s;
/*
vec[0] => vi
vec[1] => vi
vec[2] => vi
*/

struct point{
    int x;
    int y; 
}; 
// p1...p2...p3....p4...p5
// comp true  if order is correct
// else return false
bool comp(point & p1, point& p2){
    if(p1.x!=p2.x) return p1.x<p2.x;
    return p1.y<p2.y;
}

int main() {
    // string s;
    // cin>>s;
    // for(auto v: vec)
    // for(auto s: set1)
    // for(auto c:s){
        // mp['h']..0 ->1 
        // mp['e']..0 ->1
        // mp['l']..0 ->1
        // mp['l']..1 ->2
        // mp.find('k') == mp.end() ; 
        // mp['k']==0;  k will be inserted
        // mp[c]++;
        // mp['h'].push_back(position); 
    // }
    // for(map<char,int>::iterator it; it!=mp.end();it++){
        // *it; ->pair<char,int>
    // }
    // for(auto pp: mp){
        // pair<'h':1> pp
        // pair<key,value>
        // cout<<(pp.first)<<" "<<pp.second<<"\n";
    // }

    // bfs
    // queue<int> q;
    // q.insert(1);
    // q.pop();
    // q.front();
    // q.isempty(); // bool value

    // dfs
    // stack<int> st;
    // st.push(1);
    // st.pop();
    // st.top();
    // st.isempty(); bool value

    // vec = {1,1,1, 2, 3, 3 , 5, 5, 8, 10};
    // int at1 = upper_bound(vec.begin(),vec.end(),x){returns an iterator} - vec.begin();    // element just greater than  x, x=5=> pos of 8 = 8
    // int at2 = lower_bound(vec.begin(),vec.end(),x) - vec.begin();                         // element just less than or equals to x, x=5=> 6
    // number of times x appeared =>  8-6=2 times
    // sort(vec.begin(),vec.end())

    vector<point> vec(10);
    // values are inserted
    // sort(arr,arr+n,comp);
    sort(vec.begin(),vec.end(),comp);
    //
    //

    // list<int> ll;
    // ll.
    return 0;
}
