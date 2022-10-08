// catalan Number --> Catalan numbers are a sequence of natural numbers that occur in various counting problems, often involving recursively defined objects.
/*  Cn = 2nCn/n+1 = Ci*Cn-i , i=0 to n-1
Ex.  C0 = 1;
     C1 = 1;
     C2 = C0C1 + C1C0 = 1*1 + 1*1 = 2

catalan numbers = 1 1 2 5 14 42
*/

// Properties of Catalan Numbers
// 1. Possible BSTs
// 2. Paranthesis / bracket combinations
// 3. Possible Forests
// 4. Ways of triangulations
// 5. Possible paths in matrix

#include<iostream>
using namespace std;

int catalan(int n){
    if(n<=1){
        return 1;
    }

    int res = 0;
    for(int i=0; i<=n-1; i++){
        res += catalan(i)*catalan(n-i-1);
    }

    return res;
}

int main(){

    for(int i=0; i<10; i++){
        cout<<catalan(i)<<" ";
    }
    
    return 0;
}