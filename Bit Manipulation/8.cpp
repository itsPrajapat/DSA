// Given n and i, set the ith bit of the number
 /*
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,i;
    cin>>n>>i;

    int mask = 1<<i;

    n = n | mask;

    cout<<n<<endl;

    return 0;
}
*/



// Given n and i, Clear the ith bit of the number
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,i;
    cin>>n>>i;

    int mask = ~(1<<i);

    n = n&mask;

    cout<<n<<endl;

    return 0;
}
*/


// Remove the last set bit
// Ex. 101010 After removing last set bit --> 101000 if we again remove last set bit then 100000 like that 
/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans = n & (n-1);

    cout<<ans<<endl;
    
    return 0;
}
*/


// Check if the given no is power of 2 or not
/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans = n & (n-1);

    if(ans==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    return 0;
}
*/


// Count the no of set bits
#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt=0;
    while(n!=0){
        if(n&1){
            cnt++;
        }
        n = n>>1;
    }
    return cnt;
}

int optimalCount(int n){
    int cnt = 0;

    while(n!=0){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

int main(){

    int n;
    cin>>n;

    cout<<count(n)<<endl;   // O(No. of bits)

    cout<<optimalCount(n)<<endl; // O(No of set bits)
    
    return 0;
}
