#include <iostream>
using namespace std;

int gcd(int a, int b) {
   int greater = max(a,b);
   int min = a + b - greater;
   int r = greater;
   while(r!=0) {
	   r = greater%min;
	   greater = min;
	   min = r;
   }
   return greater;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int a, b;
	    cin>>a>>b;
	    cout<<gcd(a,b);
	}
	return 0;
}