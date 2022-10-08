// Reverse a sentence using stack 
// Input: Hey, how are you doing?
// Output: doing? you are how Hey,

#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string str){

    stack<string> st;

    for(int i=0; i<str.length(); i++){

        string word="";
        while(str[i] != ' ' && i<str.length()){
            word += str[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){

    string str = "Hey, how are you doing?";

    reverseSentence(str);

    
    return 0;
}