
#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    string ans = "";
    stack<string> st;
    for(int i=0; i<s.length(); i++){
        string word = "";
        while(s[i]!=' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        ans += st.top()+" ";
        // cout<<st.top()<<" ";
        st.pop();
    }
    return ans;
}

int main(){


    string s = "Hello This is me and you";
    string st = reverse(s);

    cout<<st<<endl;
    
    return 0;
}