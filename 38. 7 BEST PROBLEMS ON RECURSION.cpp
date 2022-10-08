// Q.1 REVERSE A STRING USING RECURSION
// INPUT = binod
// OUTPUT = donib
/* 
#include<iostream>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)  // base case
    {
        return;
    }
     
     string ros = s.substr(1);   // ros = rest of string
     reverse(ros);

     cout<<s[0];
}

int main(){

    string s;
    cin>>s;

    reverse(s);
    
    return 0;
} */






// Q.2  Replace pi with 3.14 in string

// example:-    INPUT = "pippxxppiixipi"
//              OUTPUT = "3.14ppxxp3.14ixi3.14"
/*
#include<iostream>
using namespace std;

void replacepi(string s)
{
    if(s.length()==0) // base case
    {
        return;
    }   

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacepi(s.substr(1));
    }   
}

int main(){
    
    string s = "pippxxppiixipi";

    replacepi(s);

    return 0;
} */





// Q.3  TOWER OF HANOI
/* 
#include<iostream>
using namespace std;

void towerofHanoi(int n, char source, char destination, char helper){

if(n==0)
{
    return;  // base case
}

towerofHanoi(n-1, source, helper, destination);
cout<<"Move from "<<source<<" to "<<destination<<endl;
towerofHanoi(n-1, helper, destination, source);

}

int main(){

     towerofHanoi(3, 'A', 'C', 'B');
    
    return 0;
} */




// Q.4  Remove all duplicates from the string
/* 
#include<iostream>
using namespace std;

void removeduplicates(string s){

    if(s.length()==0)
    {
        return;
    }
  
  if(s[0]==s[1])
{
    string ros = s.substr(1);
    removeduplicates(ros);
}
  else
  {
      cout<<s[0];
      removeduplicates(s.substr(1));
  }
  
}

int main(){
    
    string s = "aaaabbbeeecdddd";

    removeduplicates(s);

    return 0;
} */




// Q.5  Move all x to the end of the string
// Example:-  INPUT = "axxbdxcefxhix"
//            OUTPUT = "abdcefhixxxxx"
/* 
#include<iostream>
using namespace std;

string MovetoEnd(string s){

    if(s.length()==0)
    {
        return "";   // yahan pe data type string hai to return m empty string return krna pdega agr void hota to only return likhte
    }

    char ch = s[0];
    string ans = MovetoEnd(s.substr(1));

    if(ch == 'x'){
        return ans+ch;
    }

    return ch+ans;
}

int main(){
    
    string s = "axxbdxcefxhix";

    cout<<MovetoEnd(s);

    return 0;
} */



// Q.6  Generate all substrings of a string
// Example:-  INPUT = "ABC"
//            OUTPUT = ""  "A"  "B"  "AB"  "C"  "AC"  "AC"  "ABC"
/* 
#include<iostream>
using namespace std;

void substring(string s, string ans){

    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    substring(ros, ans);
    substring(ros, ans+ch);
}

int main(){

    string s = "ABC";

    substring(s, "");
    
    return 0;
}  */




// Q.7  Generate substrings with ASCII number
// Example:-  INPUT = "AB"
//            OUTPUT = ""  "B"  "66"  "A"  "BA"  "66A"  "65"  "B65"  "6665"
/* 
#include<iostream>
using namespace std;

void substring(string s, string ans){

    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    substring(ros, ans);
    substring(ros, ans+ch);
    substring(ros, ans + to_string(code));

}

int main(){

     string s = "AB";

    substring(s, "");
    
    return 0;
}  */








// Q.8  Print all possible words from the phone digits
 /* 
#include<iostream>
using namespace std;

string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans){

    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch - '0'];
    string ros = s.substr(1);

    for(int i=0; i<code.length(); i++){
        keypad(ros, ans+code[i]);
    }
    
}

int main(){
    
    keypad("23", "");

    return 0;
} 
 */





