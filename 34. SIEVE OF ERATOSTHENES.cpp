// Sieve of Eratosthenes = It is used to print the prime no. in a given range
/*
#include<iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[100] = {0};

    for(int i=2; i<=n; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                prime[j] = 1;
            }
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(prime[i]==0)
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;

    primeSieve(n);
    
    return 0;
} 

*/


//****PRIME FACTORISATION USING SIEVE*****

// spf[i] --> smallest prime factor of i
/*
#include<iostream>
using namespace std;

void primefactor(int n)
{
    int spf[100] = {0};
    
    for(int i=2; i<=n; i++)
    {
        spf[i] = i;
    }

    for(int i=2; i<=n; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                if(spf[j]==j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while(n != 1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }

}

int main(){
    
    int n;
    cin>>n;

    primefactor(n);

    return 0;
}
*/