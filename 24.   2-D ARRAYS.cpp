 // DECALAARTION
/* 
#include<iostream>
using namespace std;

int main(){
    
    int n;     // n = no. of rows
    int m;     // m = no. of columns
    
    cin>>n;
    cin>>m;

    int arr[n][m];


    // INPUT
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    
    // OUTPUT
       for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}  
 */


// Q SEARCHING A MATRIX
/*
 #include<iostream>
using namespace std;

int main(){
    
    int n;
    int m;

    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int x;
    cin>>x;

    bool flag = false;

      for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           if(arr[i][j] == x)
           {
            cout<<i<<" "<<j<<endl;
            flag = true;
            }
        }
    }

    if(flag) // iska mtlb hoga ki flag ki value true hai
    {
       cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }
    return 0;
} 
*/


// SPIRAL ORDER MATRIX
/* 
#include<iostream>
using namespace std;

int main(){
    
    int n;
    int m;

    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    // spiral order print 

    int row_start = 0;
    int row_end = n-1;
    int column_start = 0;
    int column_end = m-1;

    while (row_start<=row_end && column_start<=column_end)
    {
        // for row start
        for(int col=column_start; col<=column_end; col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        
        // for column end
        for(int row=row_start; row<=row_end; row++)
        {
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;
         
         // for row_end
        for(int col=column_end; col>=column_start; col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        // for column_start
        for(int row=row_end; row>=row_start; row--)
        {
            cout<<arr[row][column_start]<<" ";
        }
        column_start++; 
    }

    return 0;
} */


