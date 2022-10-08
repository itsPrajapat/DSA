//*** DECLARATION ***

/* #include<iostream>
#include<string>
using namespace std;

int main(){

      string str;

      cin>>str;
      cout<<str;
    
    return 0;
} */




//*****DIFFERENT TYPES OF WAYS TO DECLARE A STRING*****
/* 
 // 1.
 #include<iostream>
#include<string>
using namespace std;

int main(){
     
     string str1(5,'r');
     string str2(10,'a');
     cout<<str1<<endl;
     cout<<str2<<endl;
      
    return 0;
}   */




/* 
2.
#include<iostream>
#include<string>
using namespace std;

int main(){

  string str = "rahul prajapat";   
  cout<<str<<endl;

  return 0;
} */





/* #include<iostream>
#include<string>
using namespace std;

int main(){

  string str;
  cin>>str;
  cout<<str;
  
  return 0;
}
// INPUT = rahul is a good student
// OUTPUT = rahul
 */





/* #include<iostream>
#include<string>
using namespace std;

int main(){

  string str;
  getline(cin , str);   // ye bhi input lene ka method h jis se space bhi print hote hai

  cout<<str<<endl;
  
  return 0;
}
// INPUT = rahul is a good student
// OUTPUT = rahul is a good student
 */



/* 
// ******* append function *****
#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "fam";
  string s2 = "ily";

  s1.append(s2);
  s2.append(s1);
  cout<<s1<<endl;  // s1 = family 
  cout<<s2<<endl;  // s2 = ilyfamily

  s1.append(s2);
  cout<<s1<<endl;  // s1 = familyilyfamily
  
  return 0;
} */




/* 
#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "fam";
  string s2 = "ily";

  s1 = s1 + s2;
  cout<<s1<<endl;  // s1 = family

  s2 = s1 + s2;
  cout<<s2<<endl;  // s2 = familyily
  
  return 0;
} */





/* //**** TO ACCESS THE CHARACTER***

#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1  = "fam";
  string s2 = "ily";

  cout<<s1[1]<<endl; // output = a
  cout<<s2[2]<<endl; // output = y
  
  return 0;
} */




/* 
//*****CLEAR FUNCTION*****

#include<iostream>
#include<string>
using namespace std;

int main(){

  string abc = "RAHUL IS A GOOD STUDENT";
   cout<<abc<<endl;  // OUTPUT  = RAHUL IS A GOOD STUDENT 

  abc.clear();  // this function will clear the string
  cout<<abc<<endl;   // no output 


 
  return 0;
} */





//***** COMPARE FUNCTION*****
/* 
#include<iostream>
#include<string>
using namespace std;

int main(){
  
  string s1;
  cin>>s1;

  string s2;
  cin>>s2;

 if(s2.compare(s1)>0)
 {
   cout<<"s2 is greater than s1"<<endl;
 }
 else if(s2.compare(s1)==0)
 {
   cout<<"strings are equal"<<endl;
 }
 else
 {
   cout<<"s2 is less than s1"<<endl;
 }
 
  return 0;
} */







//****** EMPTY FUNCTION *****
/* 
#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "abc";
  cout<<s1<<endl;

  s1.clear();

  if(s1.empty())
  cout<<"string is empty"<<endl;
  
  return 0;
} */


/* 
#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "abc";
  cout<<s1<<endl;


  if(!s1.empty())
  cout<<"string is not empty"<<endl;
  
  return 0;
} */ 






/* 
//*****ERASE FUNCTION *****

#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "nincompoop";

  s1.erase(3, 4);
  cout<<s1<<endl;      // OUTPUT = ninoop

  return 0;
}
 */





/* 
//*****FIND FUNCTION*****

#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "nincompoop";

   cout<<s1.find("poo")<<endl;
  
  return 0;
}
 */




//*****INSERT FUNCTION*****
/* 
#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "nincompoop";

   s1.insert(2,"lol");

   cout<<s1<<endl;    // OUTPUT = nilolncompoop
  
  return 0;
} */






/* 
//*****LENGTH FUNCTION*****

#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "nincompoop";

   cout<<s1.length()<<endl;   // OUTPUT = 10

   cout<<s1.size()<<endl;     // OUTPUT = 10
  
  return 0;
} */


/* 
// USE OF LENGTH FUNCTION

#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "nincompoop";

  for(int i=0; i<s1.length(); i++)
  {
    cout<<s1[i]<<endl;
  }
  
  return 0;
}
 */






/* 
//*****SUBSTRING(substr) FUNCTION *****

#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "nincompoop";

  string s = s1.substr(6, 4);

  cout<<s<<endl;   // OUTPUT = poop
  
  return 0;
} */








//***** STRING TO INTEGER (stoi) *****
/*
#include<iostream>
#include<string>
using namespace std;

int main(){

  string s1 = "786";
  cout<<s1+'2'<<endl; // Output = 7862

  int x = stoi(s1);

  cout<< x+2 <<endl;  // Output = 788
  
  return 0;
} 
*/






/* 
//***** NUMERICAL TO STRING (to_string())*****

#include<iostream>
#include<string>
using namespace std;

int main(){

 int x = 786;

 cout<< to_string(x) + "2" <<endl;  // yahan pe 2 string me append hoga

 cout<< to_string(x) + "rahul" <<endl;
  
  return 0;
} */







/* 
//***** SORTING OF ARRAY *****

#include<iostream>
#include<string>
#include<algorithm>  // this headerfile is for sort function
using namespace std;

int main(){

  string s1 = "sdcvxbtaro";
  
  sort(s1.begin() , s1.end());

  cout<<s1<<endl;

  return 0;
} */





#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {

string str = "";

int t;
cin>>t;

while(t--){
	int q;
	cin>>q;

	if(q==1){
		int x;
		cin>>x;
		str.append(to_string(x));
	}

	else if(q==2){
		if(str.length()!=0){
			string s = "";
      s = s+str[0];
			int y = stoi(s);
			cout<<y<<endl;
			str.erase(0, 1);
		}
	}
	else{
		 sort(str.begin() , str.end());
	}
}




return 0;
}
