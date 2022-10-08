/* #include<iostream>
using namespace std;

int main(){

    int array[4]={10,20,30,40};

    cout<<array[3]<<endl;
    
    return 0;
} */


// other way to initialize 

/* #include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
} */


// Q(1)  TO PRINT THE MAX. AND MIN. NUMBER FROM THE ARRAY OF SIZE n

/* #include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cin>>n; 

    int array[n];

    int i;

    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(array[i]>maxNo){
            maxNo = array[i];
        }

        if(array[i]<minNo){
            minNo = array[i];
        }
    }
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
    
    return 0;
}
 */

// minor changes in same Q

/* #include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cin>>n; 

    int array[n];

    int i;

    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<n; i++)
    {
     maxNo = max(maxNo, array[i]);
     minNo = min(minNo, array[i]);
    }
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
    
    return 0;
} */



// RUNNING SUM OF AN ARRAY

/* #include<iostream>
using namespace std;

int main(){
    
    int n; 
    cin>>n; 
    
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i]; 
   }

   int sum = 0;

   for(int i=0; i<n; i++)
   {
      sum = sum + arr[i];
   }

   cout<<sum;

    return 0;
} */

