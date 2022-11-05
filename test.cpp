// #include<bits/stdc++.h>
// using namespace std;

// int trappingWater(int arr[], int n){
//     int ans = 0;
    
//     int left[n];
//     int right[n];
    
//     int k = arr[0];
//     left[0] = k;
//     for(int i=1; i<n; i++){
//         left[i] = max(left[i-1], arr[i]);
//     }
    
//     int t =  arr[n-1];
//     right[n-1] = t;
//     for(int i=n-2; i>=0; i--){
//         right[i] = max(right[i+1], arr[i]);
//     }
    
//     for(int i=0; i<n; i++){
//         ans += min(left[i], right[i]) - arr[i];
//     }
    
//     return ans;

// }

// int main(){

//     // int, char, long int, long long int, float, double

//     // -10^9 < int < 10^9
//     // -10^12 < long int < 10^12
//     // -10^18 < long long int < 10^18

//     // int a = 100000;
//     // int b = 100000;
//     // long int c = a * 1LL * b;
//     // cout<<c<<endl;


//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<trappingWater(arr, n);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool cmp(string str1, string str2)
// {
//     int s1 = str1.size();
//     int s2 = str2.size();

//     int mn = min(s1, s2);

//     for(int i=0; i<mn; i++){
//         if(str1[i]!=str2[i]){
//             return str1[i]>str2[i];
//         }
//     }
//     if(mn == s1 && s2>mn){
//         return str2[mn]>str1[0];
//     }

//         return str1[mn-1]>str2[0];
// }

// int main(){
    
//     vector<string> vect;

//     vect.push_back("123");
//     vect.push_back("9");
//     vect.push_back("87");

//     sort(vect.begin(), vect.end(), cmp);
//     for(auto i : vect){
//         cout<<i<<endl;
//     }

//     return 0;
// }
/*
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &T1, pair<int, int> &T2){
   if(T1.second==T2.second){
     return T1.first < T2.first;
   }
    return T1.second > T2.second;
}

int main(){
    
    map<int, int> mp;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x; 
        cin>>x;

        if(mp.find(x)!=mp.end()){
            mp[x]++;
        }else{
             mp[x] = 1;
        }
    }

    vector<pair<int, int> > A;
    for (auto& it : mp) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

     for (auto& it : A) {
        int x = it.first;
        while(mp[x]--){
            cout<<x<<" ";
        }
    }cout<<endl;
    
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

bool check(int n,int a[], int b[]){

    for (int i = 0; i <n; i++)
    {
        if(a[i]!=b[i]){
            return 0;
        }
    }

    return 1;

}

int countOne(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
        }
    }
        return count;
}

int main(){
    int t;
    cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
        int b[n];

		for (int i = 0; i <n; i++){
			cin>>a[i];
		}
		for (int i = 0; i <n; i++){
			cin>>b[i];
		}

		int ans = 0;

        int count_a = countOne(a,n);
        int count_b = countOne(b,n);

        if(count_a > count_b){
            int x = count_a - count_b;
            int i = 0;
            while(x>0 && i<n){
                if(a[i]==1 && b[i]==0){
                    a[i] = 1-a[i];
                    ans++;
                    x--;
                }
                i++;
            }
        }else if(count_a < count_b){
            int x = count_b - count_a;
            int i = 0;
            while(x>0 && i<n){
                if(a[i]==0 && b[i]==1){
                    a[i] = 1-a[i];
                    ans++;
                    x--;
                }
                i++;
            }
        }

        if(countOne(a,n)==countOne(b,n)){
            if(!check(n, a, b)){
                ans += 1;
            }
        }

        cout<<ans<<endl;
}	
	
	
	return 0;
}