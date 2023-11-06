#include<iostream>

using namespace std;

int main()
{
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	
	if(num1==0&&num2==0&&num3==0)	
	cout<<"the three number is 0 :"<<endl;
	
	else if(num1>num2&&num1>num3)
	cout<<"the big nubmer is :"<<num1<<endl;
	
	else if(num2>num1&&num2>num3)
	cout<<"the big number is :"<<num2<<endl;
	
	else if (num3>num1&&num3>num2)
	cout<<"the big number is :"<<num3<<endl;
	
	else if (num1<0&&num2<0&&num3<0)
	cout<<"error is number !!!"<<endl;
else 
cout<<"thank you.."<<endl;
	return 0;
}