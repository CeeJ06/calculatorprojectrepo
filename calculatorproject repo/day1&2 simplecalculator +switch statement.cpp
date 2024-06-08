#include<iostream>
using namespace std;
int main()
{
    double num1,num2,result;
    char opera;


    cout<<"enter first operand \n ";
     cin >> num1;
     cout<<"enter second operand \n";
     cin >> num2;
     cout<<"enter operator (+,-,*,/) \n";
     cin>>opera;

     switch(opera)
     {

     case '+' :
     result=num1+num2;
     cout<<""<<result<<endl;
     break;

     case '-' :
     result=num1-num2;
     cout << ""<<result << endl;
     break;

     case '*':
     result=num1*num2;
     cout<<result<<endl;
     break;

     case '/':
     result=num1/num2;
     cout<<""<<result<< endl;
     break;

     default:
     cout<<"invalid operator";
	 }


     return 0;
    }
