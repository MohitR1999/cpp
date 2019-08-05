#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;
typedef vector< pair<string, string> > vpss;

struct tag {
    string tagName;
    unordered_map<string, string> attribsAndValues;
};

tag attributesExtractor(string lineOfCode) {
    tag newTag;
    string tagName, attrbuteName, attributeValue;
    for(int i = 0; i < lineOfCode.length(); i++) {
        if(!isalnum(lineOfCode[i])) {
            lineOfCode[i]=' ';
        }
    }
    stringstream ss(lineOfCode);
    ss>>tagName;
    newTag.tagName = tagName;
    while (ss>>attrbuteName>>attributeValue)
    {
    newTag.attribsAndValues[attrbuteName] = attributeValue;
    }
    // cout<<"Tagname: "<<tagname<<endl;
    // for(int i = 0; i < attributesAndValues.size(); i++) {
    //     cout<<"Attribute Name: "<<attributesAndValues[i].first<<"   Attribute Value: "<<attributesAndValues[i].second<<endl;
    // }
    return newTag;
}

void queryExtractor(string lineOfCode, string& tagname, string& attribname) {
    for(int i = 0; i < lineOfCode.length(); i++) {
        if(!isalnum(lineOfCode[i])) {
            lineOfCode[i] = ' ';
        }
    }

    // cout<<lineOfCode<<endl;

    vs queries;
    stringstream ss(lineOfCode);
    string word;
    while(ss>>word) {
        queries.push_back(word);
    }

    int lastIndex = queries.size()-1;
    tagname = queries[lastIndex-1];
    attribname = queries[lastIndex];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin>>n>>q;
    cin.ignore();
    string lineOfCode, tagname = "", attributeName = "", attributeValue;
    bool found = false;
    vs linesOfCode, linesOfQueries;
    vector <tag> parsedTags(n);
    for(int i = 0; i < n; i++) {
        getline(cin, lineOfCode);
        linesOfCode.push_back(lineOfCode);
    }

    for(int i = 0; i < n; i++) {
        if(linesOfCode[i][1]!='/') {
            parsedTags[i] = attributesExtractor(linesOfCode[i]);
        }
        else {
            continue;
        }
    }
    vector<tag>:: iterator it = parsedTags.begin();
    while(it!=parsedTags.end()) {
        if(it->tagName == "") {
            it = parsedTags.erase(it);
        }
        else
        {
            ++it;
        }
    }
     cout<<"\n\nParsed Tags Details\n\n";
     for(int i = 0; i < parsedTags.size(); i++) {
         cout<<parsedTags[i].tagName<<endl;
         unordered_map<string, string>:: iterator it = parsedTags[i].attribsAndValues.begin();
         for(;it!=parsedTags[i].attribsAndValues.end(); it++) {
             cout<<it->first<<" : "<<it->second<<endl;
         }
         cout<<endl;
     }

     for(int i = 0; i < q; i++) {
         cin>>lineOfCode;
         queryExtractor(lineOfCode, tagname, attributeName);
         /* cout<<"\nRequired tag : "<<tagname<<endl;
         cout<<"\nRequired attribute : "<<attributeName<<endl;*/
         for(int i = 0; i < parsedTags.size(); i++) {
             if(parsedTags[i].tagName == tagname) {
                 if(parsedTags[i].attribsAndValues.find(attributeName) == parsedTags[i].attribsAndValues.end() ) {
                        cout<<"Not Found!"<<endl;
                 }
                 else {
                     cout<<parsedTags[i].attribsAndValues[attributeName]<<endl;
                     found = true;
                     break;
                 }
             }
         }
         if(found == false) {
            cout<<"Not Found!";
         } 
        
        //  linesOfQueries.push_back(lineOfCode);
     }
    return 0;
}
