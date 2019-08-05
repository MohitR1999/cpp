#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class parsedTags {
    string tagName;
    string tagAttrib;
    string attribVal;

    public:
        parsedTags() {
            tagName = tagAttrib = attribVal = "";
        }

        void setValues(string tagName, string tagAttrib, string attribVal) {
            this->tagName = tagName;
            this->tagAttrib = tagAttrib;
            this->attribVal = attribVal;
        }

        bool contains(string tagName, string tagAttrib) {
            if((this->tagName == tagName) && (this->tagAttrib == tagAttrib)) {
                return true;
            }

            else 
            return false;
        }

        string getAttrib() {
            return this->attribVal;
        }
};

vector<parsedTags> codeParser(vector <string> code) {
    string tagName, tagAttrib, tagVal;
    char ch1, ch2;
    vector<parsedTags> ptarr(code.size());
    for(int i = 0; i<code.size(); i++) {
        stringstream buff(code[i]);
        buff>>ch1>>ch2;
        if(ch2 == '/') break;
        else {
            buff.clear();
            buff.str(code[i]);
            buff>>ch1>>tagName>>ch1>>tagAttrib>>ch2>>ch2>>ch1>>ch1>>tagVal;
            ptarr[i].setValues(tagName, tagAttrib, tagVal);
        }
    }
    return ptarr;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin>>n>>q;
    vector<string> code(n);
    string query;
    vector<parsedTags> parsedCode;
    for(int i = 0; i<n; i++) {
        getline(cin, code[i]);
    }
    parsedCode = codeParser(code);
    while(q--) {
        getline(cin, query);
        stringstream buff(query);
        string tagName, attrib;
        char ch;
        do {
        buff>>tagName>>ch;
        if(ch == '~') {
            buff.clear();
            buff>>tagName>>ch>>attrib;
            for( int i = 0; i<n; i++) {
                if(parsedCode[i].contains(tagName, attrib)) {
                    cout<<parsedCode[i].getAttrib();
                    break;
                }
                else{
                    cout<< "Not Found!";
                    break;
                    }
            }
        }
        } while (ch == '.');
    }
    return 0;
}
