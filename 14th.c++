#include <iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter any character to check:";
cin>>ch;
if(ch>=65&&ch<=90){
    cout<<"The enter character["<<ch<<"] is upper case leter:";
}
else if(ch>=97&&ch<=122){
    cout<<"The enter character["<<ch<<"] is lower case leter:";
}
else if(ch>=48&&ch<=57){

cout<<"The enter character["<<ch<<"] is digit:";
}
else{
    cout<<"The character is a special symbol";
}
return 0;
}