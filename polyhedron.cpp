#include <bits/stdc++.h>
using namespace std;

long sumOfFaces(vector<string> polyhedra) {
    unordered_map<string, int> table;
    table["Tetrahedron" ] = 4;
    table["Cube"] = 6;
    table["Octahedron"] = 8;
    table["Dodecahedron"] = 12;
    table["Icosahedron"] = 20;
    long sum = 0;
    for(long i = 0; i<polyhedra.size(); i++) {
        sum += table[polyhedra.at(i)];
    }
    return sum;
}

int main() {
    int n;
    long sum = 0;
    cin>>n;
    string polyhedron;
    vector <string> polyhedra;
    while(n--){
        cin>>polyhedron;
        polyhedra.push_back(polyhedron);
    }
    sum = sumOfFaces(polyhedra);
    cout<<sum;
    return 0;
}