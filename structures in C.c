// Structure are user defined data type.


/* 
Defining a STRUCTURE

struct [structure_name]
{
    // data_type var 1
    // data_type var 2
    // data_type var 3 ...
}
[structure_variables]; 
*/


/* 
Declaring a STRUCTURE
We can either declare a structure along with strcture definition or seperately.

// Method 1
#include<stdio.h>

struct Employee
{
    int id;
    char name[53];
    float marks;
};
struct Employee e1, e2;

int main(){

    return 0;
}

// Method 2
#include<stdio.h>

struct Employee
{
    int id;
    char name[53];
    float marks;
} e1, e2;

int main(){

    return 0;
} */



/* 
INITIALIZING A STRCUTURE
We can initialize a strcture either along with strcture definition or seperately.

// Method 1
#include<stdio.h>
struct Employee
{
    int id;
    float marks;
};

int main(){

    struct Employee e1;
    e1.id = 12;
    e1.marks = 34;
    
    return 0;
}

// Method 2
#include<stdio.h>
struct Employee
{
    int id;
    float marks;
};

int main(){

    struct Employee e1 = {12, 34};

    return 0;
}
 */



/*
Array elements are accessed using the subscript variable.
In a similar fashion, strcture members are accessed using dot[.] operator.
(.) is called as "strcture member operator".
To access the member of the structure, we use this operator in between "structure name" & "member name".
*/


/* 
#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main(){

    struct student harry, ravi, subham;
    harry.id = 1;
    ravi.id = 2;
    subham.id = 3;

    harry.marks = 466;
    ravi.marks = 467;
    subham.marks = 66;

    harry.fav_char = 'p';
    ravi.fav_char = 'k';
    subham.fav_char = 'j';

    strcpy(harry.name, "harry potter student of the year");

    printf("Harry got %d marks\n",harry.marks);
    printf("Harry's name is: %s\n",harry.name);

    return 0;
}
 */



//****** typedef ****
// It is a keyword in C language which is used to give the alternative name of existing datatype.
// We can use both new and previous name of datatype.

 /* 
#include<stdio.h>
int main(){

    // typedef <previous_name> <alias_name>;

    typedef int integer;
    integer a = 4;
    printf("value of a is %d\n", a);

    return 0;
}  */




/* 
// Without using typedef 
#include<stdio.h>

struct student
{
    int id;
    int marks;
};

int main(){

    struct student s1, s2;

    s1.id = 43;
    s2.id = 34;

    printf("Value of s1's Id is %d\n", s1.id);
    printf("Value of s2's Id is %d\n", s2.id);

    return 0;
}  */


/* 
// Using typedef 
#include<stdio.h>
                                                       // This is the name of datatype
typedef struct student                                  // struct student
{                                                       // {
    int id;                                             //     int id;
    int marks;                                          //     int marks;
} std;                                                  //  } 

int main(){

    std s1, s2;

    s1.id = 43;
    s2.id = 34;

    printf("Value of s1's Id is %d\n", s1.id);
    printf("Value of s2's Id is %d\n", s2.id);

    return 0;
}  */


/* 
Q. You are given the names of n students, and their marks in 5 subjects. You have to print their names in descending order of average marks.
You have to print average marks as well. Use strctures to elegentaly solve this problem.

For example if the input is 
3
Conway 70 65 85 75 80
Hill 70 50 65 60 55
DeVito 70 90 60 50 80

The expected output is 
Conway 75
Hill 70 
DeVito 60 
 */
/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu{
	int m[5];
	char name[20];
};
int main()
{
	int n;
	scanf("%d",&n);
    struct stu s[n];
	int avg[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %d %d %d %d",s[i].name,&s[i].m[0],&s[i].m[1],&s[i].m[2],&s[i].m[3],&s[i].m[4]);
	    avg[i]=(s[i].m[0]+s[i].m[1]+s[i].m[2]+s[i].m[3]+s[i].m[4])/5;
	}
	int min;
	for(int i=0;i<n-1;i++)
	{
		min=avg[i];
		for(int j=i;j<n;j++)
		{
			if(avg[j]<avg[i])
			{
				min=avg[i];
				int temp=avg[i];
				avg[i]=avg[j];
				avg[j]=temp;
				char d[20];
				strcpy(d,s[i].name);
				strcpy(s[i].name,s[j].name);
				strcpy(s[j].name,d);
			}
		}
	}
	
	for(int i=n-1;i>=0;i--)
	{
		printf("%s %d \n",s[i].name,avg[i]);
	}
} */