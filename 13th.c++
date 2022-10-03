#include <iostream>
using namespace std;
int main(){
int n_days,day,week,years;
cout<<"Enter the total no of days:";
cin>>n_days;

years=n_days/365;
week=n_days%365/7;
day=n_days%365%7;

cout<<"years:"<<years<<endl;
cout<<"week:"<<week<<endl;
cout<<"day:"<<day<<endl;

return 0;
}