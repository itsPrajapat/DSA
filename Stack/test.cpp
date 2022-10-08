#include<bits/stdc++.h>
using namespace std;

void dailyTemperatures(vector<int>& temperatures)
{
    vector<int> ans;
    stack<int> st;

    for(int i=temperatures.size()-1; i>=0; i--){
        st.push(temperatures[i]);
    }
    
    int cnt = 0;
    while(!st.empty())
    {
        int tp = st.top();
        st.pop();

        if(st.top()>tp){
            cnt++;
            ans.push_back(cnt);
        }
        else{
            int t = st.size()-1;
            while(!st.empty()){
                int x = st.top();
                if(x>tp){

                }
                
            }
        }
        
    }
}

int main(){

    vector<int> temperatures{73,74,75,71,69,72,76,73};

dailyTemperatures(temperatures);
    
    return 0;
}