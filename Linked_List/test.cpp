#include <bits/stdc++.h>
using namespace std;

int solve(int coin[], int n, int k){
    
    int ans = 0;
    
    sort(coin, coin+n);
    
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        
        ans += coin[start];
        // cout<<ans<<endl;
        start++;
        end = end-k;
    }
    
    return ans;
}

int main() {
	
	
	int n;
	cin>>n;
	
	int coin[n];
	
	for(int i=0; i<n; i++){
	    cin>>coin[i];
	}
	
	int k;
	cin>>k;
	
	cout<<solve(coin, n, k)<<endl;
	
	return 0;
}