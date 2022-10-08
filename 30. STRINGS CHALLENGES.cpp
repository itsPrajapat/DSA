/* #include<iostream>
#include<string>
using namespace std;

int main(){

    // we know that 'a' - 'A' = 32  i.e. ascii value of a is greater than A by 32

    string str = "adsghfiuo";

    // convert into upper case

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    }

    cout << str << endl;
     
    return 0;
} */



/* 
#include<iostream>
#include<string>
using namespace std;

int main(){

    // we know that 'a' - 'A' = 32  i.e. ascii value of a is greater than A by 32

    string str = "ABCHGIDN";

    // convert into lower case

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
    }

    cout << str << endl;
     
    return 0;
} */





/* 
// NOW we will use a function to convert the upper case to lower case and lower to upper directly without applying the loop

#include<iostream>
#include<string>
#include<algorithm>       // for transform function
using namespace std;

int main(){

    string s = "ahscnnfjjec";

    transform(s.begin() , s.end() , s.begin() , ::toupper);
    cout<< s << endl;

    transform(s.begin() , s.end() , s.begin() , ::tolower);
    cout<< s << endl;

    return 0;
} */








 
// Q.  FORM THE BIGGEST NUMBER FROM THE NUMERIC STRING
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "3547595";   // isko decreasing order m sort krna hai wo hi sbse bada no. hoga     

    sort(s.begin(), s.end(),  greater<int>());       // greater<int>()  ye decreasing order m sort krne k liye
    cout << s << endl;
    
    return 0;
} 
*/





// Q. we have to print the maximum time occuring character in a string 
/* 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "agsgdacbshshahchjhf";

    int freq[26];

    for(int i=0; i<26; i++)
    {
        freq[i] = 0;
    }

    for(int i=0; i<s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for(int i=0; i<26; i++)
    {
        if(freq[i] >= maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }    

    cout<< maxF <<" "<< ans << endl;

    
    return 0;
}  */




// Q. WRITE A PROGRAM TO COUNT THE NUMEBR OF WORDS IN A STRING
/* 
#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "rahul is a good boy";

     
      int ans = 0;

     for(int i=0; i<str.size(); i++)
     {
         if(str[i] == ' ')
         {
             ans++;
         }
     }
     cout<<ans+1;

    return 0;
} */









/* 
// write a program to check a string is palindrome or not

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1 = "radar";

    char arr[5];

char temp;

    for(int i=4; i>=0; i--)
    {
        temp=s1[i];
        arr[4-i] = temp;
    }
int i;
    for( i=0; i<5; i++)
    {
        if(arr[i] != s1[i])
        {
            cout<<"not a palindrome";
           return 0;
        }
    }

    if(i==5)
    {
       cout<<"palindrome";
    }

    return 0;
} */





/* 
Q. Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space. 
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises */

/* #include <iostream>
#include <string>

using namespace std;

string Capitalize_first_letter(string text) {

	for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}

	return text;
}

int main() 
{
	string text = "cpp string exercises";
	cout << Capitalize_first_letter(text);
	return 0;
} */








