// Q.1 CHECK IF AN ARRAY IS SORTED OR NOT

/* 
#include<iostream>
using namespace std;

bool sorted(int arr[], int n)
{

    if(n==1)
    {
        return true;
    }

 bool restarray = sorted(arr+1, n-1);

    if(arr[0]<arr[1] && restarray)
    {
         return true;
    }
       
    else
        {
            return false;
        }

}

int main(){

    int arr[] = {1,2,3,4,5};

    cout<<sorted(arr, 5)<<endl;

    return 0;
} */






// Q.2 PRINT NUMBERS TILL n
  //   1. Decreasing order
  //   2. Increasing order
/* 
#include<iostream>
using namespace std;

void decreasing(int n)
{
  if(n==1)
  {
      cout<<"1"<<endl;
      return;
  }
  cout<<n<<endl;
  decreasing(n-1); 
}


void increasing(int n)
{
     if(n==1)
  {
      cout<<"1"<<endl;
      return;
  }

  increasing(n-1);
  cout<<n<<endl;
}

int main(){
    
    int n;
    cin>>n;

    decreasing(n);
    increasing(n);

    return 0;
} */





// Q.3 FIND THE FIRST AND LAST OCCURENCE OF A NUMBER IN AN ARRAY
/* 
#include<iostream>
using namespace std;

int firstoccurence(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }


    if(arr[i]==key)
    {
       return i;
    }

    return firstoccurence(arr, n, i+1, key);
}


int lastoccurence(int arr[], int n, int i, int key)
{
    
    if(i==n)
    {
        return -1;
    }

    int restarray = lastoccurence(arr, n, i+1, key);

    if(restarray != -1)
    {
        return restarray;
    }

    if(arr[i]==key)
    {
       return i;
    }

    return -1;
}


int main(){

    int arr[] = {4,2,1,2,5,2,7};

    cout<<firstoccurence(arr, 7, 0, 2)<<endl;
    cout<<lastoccurence(arr, 7, 0, 2)<<endl;
    
    return 0;
} */



