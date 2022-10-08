 /* //******* GET BIT *******
#include<iostream>
using namespace std;


    int getBit(int n , int position)
    {
        return ((n & (1<<position)) != 0);
    }

int main(){
    
   cout<<getBit(5,2)<<endl;
    return 0;
}  */



/* 
//***** SET BIT *****

#include<iostream>
using namespace std;

int setBit(int n , int position)
{
    return (n | (1<<position));
}

int main(){

    cout<<setBit(5,1);
    
    return 0;
} */





/* 
//**** CLEAR BIT****

#include<iostream>
using namespace std;

int clearBit(int n , int position)
{
    int mask = ~(1<<position);
    return (n & mask);
}
     
int main(){

    cout<<clearBit(5,2);
    
    return 0;
} */




/* 
//******UPDATE BIT***

#include<iostream>
using namespace std;

int updateBit(int n , int position, int value)
{
   int mask = ~(1<<position);
   n = n & mask;

   return (n | (value<<position));
}

int main(){

    cout<<updateBit(5,1,1);
    
    return 0;
} */