// Q.1 Write a program to find a unique number in an array where all numbers except one, are present twice {2,4,6,3,4,6,2}
/* 
#include<iostream>
using namespace std;

int unique(int arr[] , int n)
{
    int xorsum = 0;

    for(int i=0; i<n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main(){

    int arr[7] = {2,4,6,3,4,6,2};

    cout<<unique(arr , 7)<<endl;
    
    return 0;
}   */




// Q.2 Write a program to find 2 unique number in an array where all numbers except two, are present twice  {2,4,6,7,4,5,6,2}
/* 
#include<iostream>
using namespace std;

int setBit(int n , int pos)
{
    return ((n & (1<<pos)) != 0);
}

void unique(int arr[], int n)
{
    int xorsum = 0;
    for(int i=0; i<n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;

    while(setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;        
    }

    int newxor = 0;
    for(int i=0; i<n; i++)
    {
        if(setBit(arr[i] , pos-1))
        {
           newxor = newxor^arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}

int main(){

    int arr[] = {2,4,6,7,4,5,6,2};

    unique(arr , 8);
    
    return 0;
} */






// Q.3 Write a program to find a unique number in an array where all numbers except one, are present thrice  {1,3,2,3,4,2,1,1,3,2}
/* 
#include<iostream>
using namespace std;

bool getBit(int n , int pos)
{
    return ((n & (1<<pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1<<pos));
}


int unique(int arr[] , int n)
{

    int result = 0;

    for(int i=0; i<64; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            if(getBit(arr[j] , i))
            {
                sum++;
            }
        }
        if(sum%3 != 0)
        {
            result = setBit(result , i);
        }
    }
    return result;
}

int main(){
      
      int arr[] = {1,3,2,3,4,2,1,1,3,2};

      cout<<unique(arr,10)<<endl;

    
    return 0;
} */





