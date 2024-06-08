#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i=2;

do{

         double num1,num2;
		 int num;
         double result;
    char opera;
    cout<<"enter operation you want to run"<<endl;
    cout<<"1.addition"<<endl;
    cout<<"2.subtraction"<<endl;
    cout<<"3.multipliation"<<endl;
    cout<<"4.division"<<endl;
    cout<<"5.power"<<endl;
    cout<<"6.square root \n";
    cout<<"7.sine \n";
    cout<<"8.cosine \n";
    cout<<"9.tangent \n";
    cin>>num;
if(num>0&&num<=5)
    {
    cout<<"enter first operand \n ";
     cin >> num1;
     cout<<"enter second operand \n";
     cin >> num2;
}
else if (num>5&&num<=9)
{
    cout<<"enter number";
    cin>>num1;
}
else
{
    cout<<"INVALID OPERATION";
    return 14;
}
     if (num==4&& num2==0)
{
 cout<<"syntax error"<<endl;
}
else


     switch(num)
     {

     case 1 :
     result=num1+num2;
     cout<<num1<<"+"<<num2<<"= "<<result<<endl;
     break;

     case 2 :
     result=num1-num2;
     cout << num1<<"-"<<num2<<"= "<<result << endl;
     break;

     case 3:
     result=num1*num2;
     cout<<num1<<"*"<<num2<<"= "<<result<<endl;
     break;

     case 4:
     result=num1/num2;
     cout<<num1<<"/"<<num2<<"= "<<result<< endl;

     break;

     case 5:
    result=pow(num1,num2);
    cout<<num1<<"^"<<num2<<" = "<<result<<endl;
    break;

     case 6:
    result =sqrt(num1);
    cout<<"the squareroot of "<<num1<<" = "<<result<<endl;
    break;

     case 7:
    cout<<"sin"<<num1<<" = "<<sin(num1)<<endl;
    break;

     case 8:
    cout<<"cos"<<num1<<" = "<<cos(num1)<<endl;
    break;

     case 9:
    cout<<"tan"<<num1<<" = "<<tan(num1)<<endl;
        break;


     default:
     cout<<"invalid operator";}

     cout<<"enter 2 to proceed  or enter other characters to terminate \n";
     cin>>i;

        }
while(i==2);

    return 0;
}
