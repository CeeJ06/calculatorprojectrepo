#include<iostream>
using namespace std;
int main()
{
    int i=2;


do{

         int num1,num2,result;
    char opera;


    cout<<"enter first operand \n ";
     cin >> num1;
     cout<<"enter second operand \n";
     cin >> num2;
     cout<<"enter operator (+,-,*,/) \n";
     cin>>opera;
     if (opera =='/'&& num2==0)
{
 cout<<"syntax error"<<endl;
}
else

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
     cout<<"invalid operator";}

     cout<<"enter 2 to proceed or enter other characters to terminate";
     cin>>i;

        }
while(i==2);

    return 0;
}
