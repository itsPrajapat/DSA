/*   What are character arrays ?
     Character arrays are array of characters.    */

/* #include<iostream>
using namespace std;

int main(){
    
    char arr[100] = "apple";
    int i=0;

    while(arr[i] != 0)
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
} */



// How we take input and print Output

/* #include<iostream>
using namespace std;

int main(){

    char arr[100];
    cin>>arr;

    cout<<arr<<endl;
    cout<<arr[2];
    
    return 0;
} */



// Q(1) CHECK PALINDROME
// If we reverse a name and get the same name then that name is called palindrome.  FOR EX.: Nitin

/* #include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    char arr[n+1];

    cin>>arr;

    bool check = true;

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check = 0;
            break;
        }
    }

    if(check==true)
    {
        cout<<"word is a palindrome"<<endl;
    }
    else
    {
        cout<<"word is not a palindrome"<<endl;   
    }
    

    return 0;
} */




// Q(2) LARGEST WORD IN A SENTENCE
 
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLength = 0;
    int maxLength = 0;

    int st = 0;
    int maxst = 0;

    while(1) // means always true
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(currLength > maxLength)
            {
                maxLength = currLength;
                maxst = st;
            }
            currLength = 0;
            st = i+1;
        }
        else
        {
        currLength++;
        }

        if(arr[i] == '\0')
        break;
        i++;
        
    }

    cout<<maxLength<<endl;
    
    for(int i=0; i<maxLength; i++)
    {
        cout<<arr[i+maxst];
    }
    return 0;
} 