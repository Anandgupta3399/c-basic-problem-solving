#include <iostream>
#include <string.h>
using namespace std;
int main(){
char str[50];
char str1[50];
char str2[50];
cout<<"Enter string1:";
cin>>str1;
cout<<"ENter string2:";
cin>>str2;
if(strcmp(str1,str2)==0)
cout<<"strings are equal";
else
cout<<"strings are not equal";
return 0;
}