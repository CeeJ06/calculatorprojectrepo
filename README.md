#include <iostream>
#include <cmath>
double area(double x);

double pythagoras(double x, double y) {
    double m = pow(x, 2) + pow(y, 2);
    return sqrt(m);
}

#define pi 3.14
using namespace std;

int main() {
	
    int i = 1;
    do{
		
        double a, b, result;
        int num, num1;
        cout << "Enter operation you want to run \n" ;
        string  choi[3]={
        	"1.Arithmetic",
        	"2.Trigonometry",
        	"3.Advanced",
		};
		for (int  i = 0; i < 3; i++){
			cout << choi[i]<<endl;
        }
        cin>>num;
        
             if (num==1){
			 cout<<"choose option \n";
            	string option[4]={
                "1. Addition ",
                "2. Subtraction",
                "3. Multiplication ",
                "4. Division"};
                for (int t=0;t<4;t++)
                {
                	cout<<option[t];
                	cout<<"\n";
				}
				cin>>num1;
			}
			else if (num==2){
			string choi[3]={
                 "1. Tangent",
                 "2. Cosine ",
                 "3. Sine "
             };
             for(int i=0;i<3;i++)
             {
             	cout<<choi[i]<<endl;
			 }
                cin >> num1;
            }
        else {
        	
        	    cout << "Enter operation \n";
        	    string opti[5]={
                "1. Power ",
                "2. Square root ",
        		"3. Pythagoras theorem",
                "4. Area ",
            	"5. Perimeter"
            };
            for (int i=0;i<5;++i)
            {
            cout<<opti[i]<<endl;
			}
                cin >> num1;
		}
                
		
    
        switch (num) {
            case 1:
                cout << "Enter your numbers \n" << endl;
                cin >> a >> b;
                switch (num1) {
                    case 1:
                        cout <<a<<"+"<<b<<"= "<< a + b << endl;
                        break;
                    case 2:
                        cout << a<<"-"<<b<<"= "<<a - b << endl;
                        break;
                    case 3:
                        cout <<a<<"*"<<b<<"= "<< a * b << endl;
                        break;
                    case 4:
                        if (b == 0) {
                            cout << "Math error "<<endl;
                        } else {
                            cout <<a<<"/"<<b<<"= "<< a / b << endl;
                        }
                        break;
                    default:
                        cout << "Invalid operation" << endl;
                }
                break;
                
            case 2:
            	cout << "Enter number \n";
                cin >> a;
                switch (num1) {
                    case 1:
                        cout  <<"tan "<<a<<" = "<<tan(a) << endl;
                        break;
                    case 2:
                        cout <<"cos "<<a<<" = "<< cos(a) << endl;
                        break;
                    case 3:
                        cout <<"sin "<<a<<" = "<< sin(a) << endl;
                        break;
                    default:
                        cout << "Invalid function" << endl;
                }
                break;
            case 3:
                switch (num1) {
                    case 1:
                        cout << "Enter the number and power respectively \n";
                        cin >> a >> b;
                        cout <<a<<" ^ "<<b<<" = "<< pow(a, b) << endl;
                        break;
                    case 2:
                        cout << "Enter number \n" ;
                        cin >> a;
                        cout << "Result: " << sqrt(a) << endl;
                        break;
                    case 3:
                        cout << "Enter a and b \n ";
                        cin >> a >> b;
                        result = pythagoras(a, b);
                        cout << "Result is: " << result << endl;
                        break;
                    case 4:
                        cout << "Area of: \n" ;
                        cout << "1. Circle \n" ;
                        cout << "2. Triangle \n" ;
                        cout << "3. Rectangle (or square) \n" ;
                        cin >> num1;
                        if (num1 == 1) {
                            cout << "Enter radius \n" ;
                            cin >> a;
                            result = area(a);
                            cout<<"result is "<<result<<endl;
                        } else {
                            cout << "Enter base and height (length and width) \n";
                            cin >> a >> b;
                            if (num1 == 2)
                                result = 0.5 * a * b;
                            else if (num1 == 3)
                                result = a * b;
                        }
                        cout << "Result is: " << result << endl;
                        break;
                    case 5:
                        cout << "Enter length and width of your square or rectangle" << endl;
                        cin >> a >> b;
                        result = 2 * (a + b);
                        cout << "Result is: " << result << endl;
                        break;
                    default:
                        cout << "Invalid operation" << endl;
                }
                break;
            default:
                cout << "Invalid choice" << endl;
        }
        cout << "Enter 2 to proceed or enter any other character to terminate \n";
        cin >> i;
        
    } while (i == 2);
    return 0;
}

double area(double x)
{
	return pi*pow(x,2);
}
 
