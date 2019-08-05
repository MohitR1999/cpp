#include <bits/stdc++.h>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;
typedef set<int> si;

si cubes;

void initializeSet() {
    for(int i = 0; i <=47; i++ ) {
        cubes.insert(pow(i,3));
    }

    //  for(auto it = cubes.begin(); it!= cubes.end(); it++ ) {
    //      cout<<*it<<" ";
    //  }
    //  cout<<endl;
}


int count(int n) {
    int cc = 0;
    if(n == 1) return 1;
    for(int i = 1; i <= cbrt(n); i++) {
        cc = 0;
         cout<<"n: "<<cbrt(n)<<endl;
        int icube = pow(i,3);
        cout<<"icube: "<<icube<<endl;
        int temp = n - icube;
        cout<<"temp: "<<temp<<endl;
        set<int> ::iterator posTemp = cubes.find(temp);
        // cout<<"temp: "<<temp<<endl;
        //  if(posTemp == cubes.end()) {
        //      cout<<"Pos is NULL, LOL XD "<<endl;
        //  }
        
        if(posTemp != cubes.end()) {
            // cout<<"Pos is not null!\n";
            if(temp == icube) {
                cc++;
                return cc;
            }
            
            else if(temp*icube != 0){
                cc+=2;
                return cc;
            }
            else {
                cc++;
                return cc;
            }
        }
    }
    return 0;
}

int main() {
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	initializeSet();
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    cout<<count(n)<<endl;
	}
	
	return 0;
}