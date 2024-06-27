#include<iostream>
#include<cmath>
using namespace std;
float sum(float a,float b)
{
	return a+b;
}
float subtraction(float a,float b)
{ 
   if(a>b)
   {
	return a-b;
   }
   else 
   {
   	return b-a;
   }
}
float prod(float a,float b)
{
	return a*b;
}
float div(float a,float b)
{
	if(b!=0)
	{
		return a/b;
	}
	else
	{
		return 0;
	}
}
float interest(float p,float t,float r)
{
	return (p*t*r)/100;
}
float principle(float s,float t, float r)
{
	return (s*100)/(t*r);
}
float time(float inter ,float princ,float r)
{
	return (inter*100)/(princ*r);
}
float rate(float inter ,float princ,float t)
{
	return (inter *100)/(princ*t);
}
int main()
{
	int menu;
	mount:
	double angle,radians,sine_value,cos_value,tangent_value;
	cout<<"\t\t\t\t\t\t----CALCULATOR----- "<<endl;
	cout<<"\t\t\t\t\t\t1:Arithmetic operator"<<endl;
	cout<<"\t\t\t\t\t\t2:Interest"<<endl;
	cout<<"\t\t\t\t\t\t3:trignometric calculation"<<endl;
	cout<<"\t\t\t\t\t\tenter the choice:";
	cin>>menu;
	switch(menu)
	{
		case 1:
		char choice;
		float num1,num2;
		again:
		cout<<endl<<"\t\t\t\t\t\t------Menu-------" << endl;
	    cout <<"\t\t\t\t\t\ta: Addition operation" << endl;
	    cout <<"\t\t\t\t\t\tb: Subtraction operation" << endl;
	    cout <<"\t\t\t\t\t\tc: Multiplication operation" << endl;
	    cout <<"\t\t\t\t\t\td: Division operation" << endl;
	    cout<<"\t\t\t\t\t\tEnter the choice(a/b/c/d):";
	    cin>>choice;
	    switch(choice)
	    {
	    	case 'a':
	    		cout<<"\t\t\t\t\t\tenter first number:";
	    		cin>>num1;
	    		cout<<"\t\t\t\t\t\tenter second number:";
	    		cin>>num2;
	    		cout<<"\t\t\t\t\t\tsum of two number:"<<sum(num1,num2);
	    		break;
	    	case 'b':
	    		cout<<"\t\t\t\t\t\tenter first number:";
	    		cin>>num1;
	    		cout<<"\t\t\t\t\t\tenter second number:";
	    		cin>>num2;
	    		cout<<"\t\t\t\t\t\tsubtraction of two number:"<<subtraction(num1,num2);
	    		break;
	    	case 'c':
	    	   cout<<"\t\t\t\t\t\tenter first number:";
	    	   cin>>num1;
	    	   cout<<"\t\t\t\t\t\tenter second number:";
	    	   cin>>num2;
	    	   cout<<"\t\t\t\t\t\tmultiplication of two number:"<<prod(num1,num2);
	    	   break;
	        case 'd':
		    	cout<<"\t\t\t\t\t\tenter first number:";
		    	cin>>num1;
		    	cout<<"\t\t\t\t\t\tenter second number:";
		    	cin>>num2;
		    	cout<<"\t\t\t\t\t\tDivision of two number:"<<div(num1,num2);
		    	break;
	    	default:
	    	    cout<<"sorry !we have no more option fo this operation";
		}
		char choose;
		cout<<endl<<endl<<"\t\t\t\t\t\tperform operation again(y/n):";
		cin>>choose;
		if(choose=='y')
		{
			goto again;
		}
		break;
		case 2:
			float p,t,r,inter,princ;
			char option;
			cout<<endl;
			bye:
			cout<<"\t\t\t\t\t\t----simple Interest------------"<<endl;
			cout<<"\t\t\t\t\t\tA:simple interest"<<endl;
			cout<<"\t\t\t\t\t\tB:principle"<<endl;
			cout<<"\t\t\t\t\t\tC:Time"<<endl;
			cout<<"\t\t\t\t\t\tD:Rate"<<endl;
			cout<<"\t\t\t\t\t\tchoose your option(A/B/C/D):";
			cin>>option;
			switch(option)
			{
				case 'A':
				   cout<<"\t\t\t\t\t\tenter the principle:";
					cin>>p;
					cout<<"\t\t\t\t\t\tenter the time:";
					cin>>t;
					cout<<"\t\t\t\t\t\tenter the rate:";
					cin>>r;
					cout<<"\t\t\t\t\t\tsimple interest:"<<interest(p,t,r);
					break;
				case 'B':
					cout<<"\t\t\t\t\t\tenter the interest:";
					cin>>p;
					cout<<"\t\t\t\t\t\tenter the time:";
					cin>>t;
					cout<<"\t\t\t\t\t\tenter the rate:";
					cin>>r;
					cout<<"\t\t\t\t\t\tprinciple:"<<principle(inter,t,r);
					break;
				case 'C':
					cout<<"\t\t\t\t\t\tenter the interest:";
					cin>>inter;
					cout<<"\t\t\t\t\t\tenter the principle:";
					cin>>princ;
					cout<<"\t\t\t\t\t\tenter the rate:";
					cin>>r;
					cout<<"\t\t\t\t\t\tTime:"<<time(inter,princ,r);
					break;
				case 'D':
				    cout<<"\t\t\t\t\t\ttenter the interest:";
					cin>>inter;
					cout<<"\t\t\t\t\t\tenter the principle:";
					cin>>princ;
					cout<<"\t\t\t\t\t\ttenter the time:";
					cin>>t;
					cout<<"\t\t\t\t\t\tRate:"<<rate(inter,princ,t);
					break;
				default:
					cout<<"\t\t\t\t\t\ttwe have no more option!!";
			}
			char term;
			cout<<endl<<"\t\t\t\t\t\ttchoose for terminate the program(Y/N):";
			cin>>term;
			if(term=='Y')
			{
				goto bye;
			}
		   break;
		case 3:
			char opt;
			flex:
			cout<<endl<<"\t\t\t\t\t\tx:Sine value";
			cout<<endl<<"\t\t\t\t\t\ty:Cose value";
			cout<<endl<<"\t\t\t\t\t\tz:Tangent value";
			cout<<endl<<"\t\t\t\t\t\tenter the option(x/y/z):";
			cin>>opt;
			float pi=3.144444;
			switch(opt)
			{
			  case 'x':
					cout<<"\t\t\t\t\t\tenter the angle:";
					cin>>angle;
					radians=angle*pi/180.0;
					sine_value = sin(radians);
					cout << "\t\t\t\t\t\tsin(" << angle << " degrees) = " << sine_value << endl;
				break;
			   case 'y':
					cout<<"\t\t\t\t\t\tenter the angle:";
					cin>>angle;
					radians=angle*pi/180.0;
					cos_value = cos(radians);
					cout << "\t\t\t\t\t\tcos(" << angle << " degrees) = " << cos_value << endl;
				break;
			   case 'z':
					cout<<"\t\t\t\t\t\tenter the angle:";
					cin>>angle;
					radians=angle*pi/180.0;
					tangent_value = tan(radians);
					cout << "\t\t\t\t\t\ttangent(" << angle<< " degrees) = " << tangent_value << endl;
					break;
				default:
						cout<<"\t\t\t\t\t\twe have no more option!";
				}
				int termt;
				cout<<"\t\t\t\t\t\tchoose u want to terminate program or not(0/1):";
				cin>>termt;
				if(termt==1)
				{
					goto flex;
				}
			}
		  string mnt;
		  cout<<"\t\t\t\t\t\tYou want to perform any other operation(yes/no):";
		  cin>>mnt;
            if(mnt=="yes")
            {
            	cout<<endl<<endl;
            	goto mount;
			}
		}
		

