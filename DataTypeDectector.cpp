#include<iostream>
using namespace std;
void DataType(double enter)
{
    cout<<enter<<"is a double data type";
}
void DataType(int enter)
{
    cout<<enter<<"is a integer data type";
}
void DataType(float enter)
{
    cout<<enter<<"is a float data type";
}
void DataType(char enter)
{
    cout<<enter<<"is a char data type";
}
void DataType(string enter)
{
    cout<<enter<<"is a string data type";
}
void DataType(long enter)
{
    cout<<enter<<"is a long data type";
}
int main(int enter)
{ 
    cout<<"Enter charactor;";
    cin>>enter;
DataType(enter);
DataType(enter);
DataType( enter);
DataType( enter);
DataType( enter);
DataType( enter);
return 0;
}