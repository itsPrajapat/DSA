// Q.1 Given a "2 cross n" board and tiles of size "2 cross 1", count the number of ways to tile the given board using these tiles

/* 
#include<iostream>
using namespace std;

int tilingWays(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return  tilingWays(n-1) + tilingWays(n-2);       // tilingWays(n-1) is for when we place vertically
                                                    // tilingWays(n-2) is for when we place horizontally
}

int main(){

    cout<<tilingWays(4);
    
    return 0;
} */







// Q.2 Find the number of ways in which n friends can remain single or can be paired
/* 
#include<iostream>
using namespace std;

int friendsPairing(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }

    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}

int main(){

    cout<<friendsPairing(4);
    
    return 0;
} */





// Q.3          0-1 Knapsack Problem
// Put n items with given weight and value in a knapsack of capacity W to get the maximum total value in the knapsack
/* 
#include<iostream>
using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{
    if(n==0 || W==0)
    {
        return 0;
    }

    if(wt[n-1]>W)
    {
        return knapsack(value, wt, n-1, W);
    }

    return max(knapsack(value, wt, n-1, W-wt[n-1])+value[n-1] , knapsack(value, wt, n-1, W));
}

int main(){

    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    int W = 50;

    cout<<knapsack(value,wt,3,W)<<endl;
    
    return 0;
} */