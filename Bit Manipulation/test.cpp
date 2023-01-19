#include<bits/stdc++.h>
using namespace std;

vector<string> AllPossibleStrings(string s){
    vector<string> ans;
    int n = s.size();
    
    for(int num=0; num<(1<<n); num++){
        string str ="";
        for(int bit=0; bit<n; bit++){
            if(num&(1<<bit)){
                str+=s[bit];
            }
        }
        ans.push_back(str);
    }

    return ans;
}



int main(){

    string s = "abc";

    vector<string> ans = AllPossibleStrings(s);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
    return 0;
}