// MATRIX TRANSPOSE
/* Q(1)  Given a square matrix A & its number of rows(or columns) N, return the transpose of A 
              The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the 
              matrix.        */

/* #include<iostream>
using namespace std;

int main(){
    
    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};

    for(int i=0; i<3; i++)
    {
        for(int j=i; j<3; j++)
        {
            // swap
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
             arr[j][i] = temp;
        }
    }

    // print
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} */



// MATRIX MULTIPLICATION
/*  Q(2) Given two 2-D arrays of sizes n1 cross n2  and n2 cross n3. Your task is to multiply these matrices and output the
         multiplied matrix.        */
/* 
#include<iostream>
using namespace std;

int main(){
    
    int n1;
    int n2;
    int n3;

    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];

    for(int i=0; i<n1; i++)
    {
       for(int j=0; j<n2; j++)
       {
           cin>>m1[i][j];
       }
    }

     for(int i=0; i<n2; i++)
    {
       for(int j=0; j<n3; j++)
       {
           cin>>m2[i][j];
       }
    }

    int ans[n1][n3];
     for(int i=0; i<n1; i++)
    {
       for(int j=0; j<n3; j++)
       {
          ans[i][j] = 0;
       }
    }

    for(int i=0; i<n1; i++)  // this is for row of first matrix
    {
      for(int j=0; j<n3; j++) // this is for column of second matrix
      {
        for(int k=0; k<n2; k++)
        {
            ans[i][j] += m1[i][k]*m2[k][j];
        }
      }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} */


// MATRIX SEARCH
/* Q(3) Given a n cross m matrix.
        Write an algorithm to find that the given value exists in the matrix or not.
        Integers in each row are sorted in ascending from left to right.
        Integers in each column are sorted in ascending from top to bottom.      */
/* 
#include<iostream>
using namespace std;

int main(){
    
    int n;
    int m;

    cin>>n>>m;

    int matrix[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }

        int target;
        cin>>target;

        int r = 0 , c = m-1;
        bool found = false;
        while(r<n && c>=0)
        {
            if(matrix[r][c] == target)
            {
              found = true;
            }
            if(matrix[r][c] > target)
            {
                c--;
            }
            else
            {
                r++;
            }          
        }

        if(found==true)
        {
            cout<<"Element found";
        }
        else
        {
            cout<<"Element does not exist";
        }
        
    return 0;
} */



