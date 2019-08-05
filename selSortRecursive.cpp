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

void fun(char *s) 
{ 
  if(s[0]=='\0')
    return;

    fun(s+1);
    fun(s+1);
    cout<<s[0];
}    

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    char s[] = {'x', 'y', 'z', '\0'};
    fun(s);
    return 0;
}
