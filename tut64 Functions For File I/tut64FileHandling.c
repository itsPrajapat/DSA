#include<stdio.h>
int main()
{
 FILE *ptr = NULL;
 char string[34] = "its prajapat";
 ptr = fopen("prajapat.txt", "w");

 
 fprintf(ptr, "%s", string);
 return 0;
}
