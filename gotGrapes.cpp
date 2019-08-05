#include<bits/stdc++.h>
using namespace std;

string isSufficient(int x, int y, int z, int a, int b, int c) {
    int required = x + y + z;
    int total = a + b + c;
    if(required > total) {
        return "NO";
    }

    else
    {
         if(x > a) {
                return "NO";        
         }
        
        else
        {
             a -= x;
             if(y > (a + b)) {
                 return "NO";
             }

             else
             {
                  int michael_grapes = a + b + c - y;
                  if(z > michael_grapes) {
                      return "NO";
                  }
             }
             
        }
        
    }

    return "YES";
}

int main(){
    int x, y, z;
    int a, b, c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;

    string result = isSufficient(x, y, z, a, b, c);
    cout<<result;
    return 0;
}