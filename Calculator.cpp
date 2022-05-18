#include <iostream>
#include <math.h>
#include <string>
#include <limits>
using namespace std;


void read_input(char &arm)
{
	string input;
	getline(cin,input);
	while(1)
	{
		if(input.length()!=1)
		{  
			cin.clear();
			cout<<"  \t You have entered wrong input \n Press Enter to continue\n ";
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"\nEnter a correct character! : ";
			getline(cin,input);
			cout<<"\n";
		}
		if(input.length()==1){
			arm=input[0];
			break;
		}
	}
}
void check_input_oper (char &oper)
{
	while(1)
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<" \n \t You have entered wrong input \n\n";
			cout<<"Enter a correct operation! : ";
			cin>>oper;
		}
		if(!cin.fail())
			break;
	}
}
void check_input_num (double &num)
{
	while(1)
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<" \n \t You have entered wrong input... Don't enter a very large number ,\n a character instead of a number or vice versa\n\n";
			cout<<"Enter a correct number! : ";
			cin>>num;		
		}
		if(!cin.fail())
			break;
	}
}
void check_input_num (int &num)
{
	while(1)
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<" \n \t You have entered wrong input... Don't enter a very large number ,\n a character instead of a number or vice versa\n\n";
			cout<<"Enter a correct number! : ";
			cin>>num;		
		}
		if(!cin.fail())
			break;
	}
}
void large_num(double &large_num)
{
	while(1)
	{
		if(large_num>1000000)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<" \n \t You have entered a very large number !! \n\n";
			cout<<"Enter a correct number! : ";
			cin>>large_num;		
		}
		if(large_num<1000000)
			break;
	}
}
void large_num(int &large_num)
{
	while(1)
	{
		if(large_num>1000000)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<" \n \t You have entered a very large number !! \n\n";
			cout<<"Enter a correct number! : ";
			cin>>large_num;		
		}
		if(large_num<1000000)
			break;
	}
}

void rounding_numbers()
{
	double y;
	cout<<"Enter number to round: ";
	cin>> y;
	large_num(y);
	check_input_num (y);

	y=y+0.5;
	cout<<"\t ________________________________________";
	cout<<" \n \t(: The answer is: "<<floor (y)<<"\t\t\t:)"<<endl;
	cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"; 
}
void square_area()
{
	double side,area;
	cout<<"Enter side: ";
	cin>>side;
	large_num(side);
	check_input_num (side);
	if (side<1)
		cout<<"Enter a number larger than 0 next time , ediot ! \n";

	else
	{
		area= side*side;
		cout<<"\t ________________________________________";
		cout<<" \n \t(: Area = "<<area<<"\t\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
}
void rectangle_area()
{
	double width, length, area;
	cout<<"Enter width: ";
	cin>>width;
	large_num(width);
	check_input_num (width);
	if (width<1)
		cout<<"Enter a number larger than 0 next time , ediot ! \n";

	else
	{
		cout<<"Enter length: ";
		cin>>length;
		large_num(length);
		check_input_num (length);
		if (length<1)
			cout<<"Enter a number larger than 0 next time , ediot ! \n";


		else 
		{
			area= length*width;
			cout<<"\t ________________________________________";
			cout<<" \n \t(: Area = "<<area<<"\t\t\t\t:)"<<endl;
			cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}
	}
}
void circle_area()
{
	double radius,area;
	cout<<"Enter radius: ";
	cin>>radius;
	large_num(radius);
	check_input_num (radius);
	if (radius<1)
		cout<<"Enter a number larger than 0 next time , ediot ! \n";

	else
	{
		area= 3.141592653589793238*radius;
		cout<<"\t ________________________________________";
		cout<<" \n \t(: Area = "<<area<<"\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}  
}
void triangle_area()
{
	double base,height,area;
	cout<<"Enter base : \n";
	cin>>base;
	large_num(base);
	check_input_num (base);
	if (base<1)
		cout<<"Enter a number larger than 0 next time , ediot ! \n";

	else
	{
		cout<<"Enter height : \n";
		cin>>height;
		large_num(height);
		check_input_num (height);
		if (height<1)
			cout<<"Enter a number larger than 0 next time , ediot ! \n";

		else 
		{
			area=base*height*0.5;
			cout<<"\t ________________________________________";
			cout<<" \n \t(: Area = "<<area<<"\t\t\t:)"<<endl;
			cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}
	}
}
void circle_circumference()
{
	double circum,radius;
	cout<<"Enter radius: ";
	cin>>radius;
	large_num(radius);
	check_input_num (radius);
	if (radius<1)
		cout<<"Enter a number larger than 0 next time , ediot ! \n";

	else
	{
		circum= 3.141592653589793238*radius*2;
		cout<<"\t ________________________________________";
		cout<<" \n \t(: Circumference = "<<circum<<"\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
}
void rectangle_perimeter()
{
	double width, length, perim;
	cout<<"Enter width: ";
	cin>>width;
	large_num(width);
	check_input_num (width);
	if (width<1)
		cout<<"Enter a number larger than 0 next time , ediot ! \n";

	else
	{
		cout<<"Enter length: ";
		cin>>length;
		large_num(length);
		check_input_num (length);
		if (length<1)
			cout<<"Enter a number larger than 0 next time , ediot ! \n";
		else
		{
			perim= 2*(length+width);
			cout<<"\t ________________________________________";
			cout<<" \n \t(: Perimeter = "<<perim<<"\t\t\t:)"<<endl;
			cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

		}
	}
}
void square_perimeter()
{
	double side, perim;
	cout<<"Enter Side: ";
	cin>>side;
	large_num(side);
	check_input_num (side);
	if (side<1)
		cout<<"Enter a number larger than 0 next time , ediot ! \n";
	else 
	{
		perim=side*4;
		cout<<"\t ________________________________________";
		cout<<" \n \t(: Perimeter = "<<perim<<"\t\t\t:)\n";
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
}
void odd_even()
{
	int number;
	cout<<"\nEnter a number to find if even or odd : \n";
	cin>>number;
	large_num(number);
	check_input_num(number);
	if (number<1)
		cout<<"Enter a number larger than 0 next time , ediot ! \n";
	else if(number %2==0)
	{
		cout<<"\t ________________________________________";
		cout<<" \n \t(: The number "<<number<<" is even !\t\t:) \n";
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
	else if(number %2!=0)
	{
		cout<<"\t ________________________________________";
		cout<<" \n \t(: The number "<<number<<" is odd !\t\t:) \n";
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
	else cout<<"What do tou need ? \n";

}

void isprime()
{
	int isprime,i;
	bool reallyprime=true;
	cout<<"Enter a number to find if prime : \n ";
	cin>>isprime;

	large_num(isprime);
	check_input_num(isprime);
	if(isprime<1)
		cout<<"Number must be greater than 1 ! \n";
	else if(isprime==1)
		cout<<"Number is neither prime neither odd \n";
	else
	{
		for(i=2;i<=isprime/2;++i)
		{
			if((isprime%i)==0)
			{
				reallyprime=false;
				break;
			}
		}
		if(reallyprime)
		{
			cout<<"\t ________________________________________________________";
			cout<<" \n \t(: The number "<<isprime<<" you entered is prime !\t\t\t:) \n";
			cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}
		else
		{
			cout<<"\t ________________________________________________________";
			cout<<" \n \t(: The number "<<isprime<<" you entered is not prime !\t\t:) \n";
			cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}
	}
}
void factors()
{
	int find,i;
	cout<<"Enter number to find its factors \n";
	cin>>find;

	large_num(find);
	check_input_num(find);

	if(find<1)
		cout<<"Number must be greater than 1 ! \n";
	else
	{
		cout<<"Factors for "<<find<<" are : \n";
		for(i=1;i<=find;i++)
		{
			if (find%i==0)
				cout<<i<<"  ";
		}
		cout<<"\n";
	}
}

int gcd(int num1,int num2)
{
	int i,gcd;
	for (int i=1;i<=num1&&i<=num2;++i)
	{
		if (num1%i==0 && num2%i==0)
			gcd=i;
	}
	return gcd;
}
int lcm(int num1,int num2)
{
	int lcm,max;
	max= (num1>num2)? num1:num2;
	do
	{
		if (max %num1==0 && max%num2==0)
		{
			lcm=max;
			break;
		}

		else ++max;
	}
	while (true);
	return lcm;
}
void gcd_formula()
{

	int gcd_num1,gcd_num2,gcd_num3,gcd_num4;
	char gcd_choice=0;
	cout<<"How many numbers ? \n";
	cout<<"\t a) Two  b) Three  c) Four \n";

	read_input(gcd_choice);

	switch(gcd_choice)
	{
	case 'a':
		cout<<"Enter first number : \n"; 
		cin>>gcd_num1;

		large_num(gcd_num1);
		check_input_num(gcd_num1);

		cout<<"Enter second number : \n"; 
		cin>>gcd_num2;

		large_num(gcd_num2);
		check_input_num(gcd_num2);

		if(gcd_num1==0||gcd_num2==0)
		{ 
			cout<<" \n Seriously \n Go Away ); \n ";
			break;
		}

		cout<<"\t ________________________________________";
		cout<<" \n \t(: The GCD for "<<gcd_num1<<" and "<<gcd_num2<<" is = "<<gcd(gcd_num1,gcd_num2)<<"\t\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n\n";
		break;
	case'b':
		cout<<"Enter first number : \n"; 
		cin>>gcd_num1;

		large_num(gcd_num1);
		check_input_num(gcd_num1);

		cout<<"Enter second number : \n"; 
		cin>>gcd_num2;

		large_num(gcd_num2);
		check_input_num(gcd_num2);

		cout<<"Enter third number : \n"; 
		cin>>gcd_num3;

		large_num(gcd_num3);
		check_input_num(gcd_num3);

		if(gcd_num1==0||gcd_num2==0||gcd_num3==0)
		{ 
			cout<<" \n Seriously \n Go Away ); \n ";
			break;
		}
		cout<<"\t ________________________________________";
		cout<<" \n \t(: The GCD for "<<gcd_num1<<" and "<<gcd_num2<<" and "<<gcd_num3<<" is = " <<gcd (gcd(gcd_num1,gcd_num2),gcd_num3)<<"\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n\n";

		break;

	case 'c':

		cout<<"Enter first number : \n"; 
		cin>>gcd_num1;

		large_num(gcd_num1);
		check_input_num(gcd_num1);

		cout<<"Enter second number : \n"; 
		cin>>gcd_num2;

		large_num(gcd_num2);
		check_input_num(gcd_num2);

		cout<<"Enter third number : \n"; 
		cin>>gcd_num3;

		large_num(gcd_num3);
		check_input_num(gcd_num3);
		cout<<"Enter fourth number : \n"; 
		cin>>gcd_num4;

		large_num(gcd_num4);
		check_input_num(gcd_num4);

		if(gcd_num1==0||gcd_num2==0||gcd_num3==0||gcd_num4==0)
		{ 
			cout<<" \n Seriously \n Go Away ); \n ";
			break;
		}
		cout<<"\t ________________________________________________";
		cout<<" \n \t(: The GCD for "<<gcd_num1<<" and "<<gcd_num2<<" and "<<gcd_num3<<" and "<<gcd_num4<<" is = " <<gcd(gcd_num4,gcd(gcd_num3,(gcd(gcd_num1,gcd_num2))))<<"\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n\n";
		break;
	default :cout<<"What? \n";
		break;
	}}
void lcm_formula()
{
	int lcm_num1,lcm_num2,lcm_num3,lcm_num4;
	char lcm_choice=0;
	cout<<"How many numbers ? \n";
	cout<<"\t a) Two  b) Three  c) Four \n";
	read_input(lcm_choice);
	switch(lcm_choice)
	{
	case 'a':
		cout<<"Enter first number : \n"; 
		cin>>lcm_num1;

		large_num(lcm_num1);
		check_input_num(lcm_num1);

		cout<<"Enter second number : \n"; 
		cin>>lcm_num2;

		large_num(lcm_num2);
		if(lcm_num1==0||lcm_num2==0)
		{ 
			cout<<" \n Seriously \n Go Away ); \n ";
			break;
		}

		check_input_num(lcm_num2);

		cout<<"\t ________________________________________________________";
		cout<<" \n \t(: The LCM for "<<lcm_num1<<" and "<<lcm_num2<<" is = " <<lcm(lcm_num1,lcm_num2)<<"\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n\n";
		break;
	case'b':
		cout<<"Enter first number : \n"; 
		cin>>lcm_num1;

		large_num(lcm_num1);
		check_input_num(lcm_num1);

		cout<<"Enter second number : \n"; 
		cin>>lcm_num2;

		large_num(lcm_num2);
		check_input_num(lcm_num2);

		cout<<"Enter third number : \n"; 
		cin>>lcm_num3;

		large_num(lcm_num3);
		if(lcm_num1==0||lcm_num2==0||lcm_num3==0)
		{ 
			cout<<" \n Seriously \n Go Away ); \n ";
			break;
		}
		check_input_num(lcm_num3);
		cout<<"\t ________________________________________________________";
		cout<<" \n \t(: The LCM for "<<lcm_num1<<" and "<<lcm_num2<<" and "<<lcm_num3<<" is = " <<lcm(lcm_num3,(lcm(lcm_num1,lcm_num2)))<<"\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n\n";

		break;

	case 'c':

		cout<<"Enter first number : \n"; 
		cin>>lcm_num1;

		large_num(lcm_num1);
		check_input_num(lcm_num1);

		cout<<"Enter second number : \n"; 
		cin>>lcm_num2;

		large_num(lcm_num2);
		check_input_num(lcm_num2);

		cout<<"Enter third number : \n"; 
		cin>>lcm_num3;

		large_num(lcm_num3);
		check_input_num(lcm_num3);
		cout<<"Enter fourth number : \n"; 
		cin>>lcm_num4;

		large_num(lcm_num4);
		check_input_num(lcm_num4);

		if(lcm_num1==0||lcm_num2==0||lcm_num3==0||lcm_num4==0)
		{ 
			cout<<" \n Seriously \n Go Away ); \n ";
			break;
		}
		cout<<"\t ________________________________________________________";
		cout<<" \n \t(: The LCM for "<<lcm_num1<<" and "<<lcm_num2<<" and "<<lcm_num3<<" and "<<lcm_num4<<" is = " <<lcm(lcm_num4,lcm(lcm_num3,(lcm(lcm_num1,lcm_num2))))<<"\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n\n";
		break;
	default :cout<<"What? \n";
		break;
	}}
void calculator()
{
	double a=0;
	double b=0;
	double result=0;
	char operation=0;

	cout<< "Enter first number : \n";
	cin>> a;

	large_num(a);
	check_input_num (a);

	cout <<"Enter second number: \n";
	cin>> b;

	large_num(b);
	check_input_num (b);

	cout<<"Enter operation ( *  /  -  +  ^ ) : \n";
	cin>>operation;


	check_input_oper (operation);
	switch(operation)
	{
	case'+':
		result= a + b;
		cout<<"\t ________________________________________";
		cout<<" \n \t(: The answer is: "<<result<<"\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		break;
	case'-':
		result= a - b;
		cout<<"\t ________________________________________";
		cout<<" \n \t(: The answer is: "<<result<<"\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		break;
	case'*':
		result= a * b;
		cout<<"\t ________________________________________";
		cout<<" \n \t(: The answer is: "<<result<<"\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		break;
	case'^':
		result= pow(a,b);
		cout<<"\t ________________________________________";
		cout<<" \n \t(: The answer is: "<<result<<"\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		break;
	case'=':
		cout<<" \n \t Are you Joking ?";
		break;
	case'/':
		break;
	default: 
		cout<<" \n \t Missing Operation";	
	}
	if(operation=='/' && b==0)
	{
		cout<<" \n \t What????!!?";
	}
	else if (operation=='/' && b!=0)
	{
		result= a / b;
		cout<<"\t ________________________________________";
		cout<<" \n \t(: The answer is: "<<result<<"\t\t\t:)"<<endl;
		cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	}
}

int main()
{ 
	char user_choice=0;
	char area_choice=0;
	char perimeter_choice=0;
	const char exit='x';

	cout<<"Made by : Aboemair\t Aboemair \t Aboemair \t Aboemair \t Aboemair \t Aboemair \t Aboemair\n";
	cout<<"\t\t AboEmair\t Aboemair\t Aboemair\t Aboemair\t Aboemair\t Aboemair\n\n";
	while(user_choice!= exit && area_choice!=exit && perimeter_choice!=exit)
	{
		cout<<"______________________________________________________________________________________________________________________\n";
		cout<<"What do you want to calculate? ...\n Enter \"x\" to exit (: \n\n";
		cout<<"a) Simple Calc?  b) Area? c) Perimeter?  d) Rounding Numbers  e) GCD  f) LCM  g) Odd or Even  h) Is Prime?  i) Factors \n";
		cout<<"\n \t Enter a ,b ,c, d ,e ,f ,g ,h or i \n\n";

		read_input(user_choice);

		switch(user_choice)
		{
		case 'a':
			calculator();
			cout<<"\n\n";
			break;
		case'b':
			cout<< "\n \t a)Square  b)Rectangle   c)Circle  d) Triangle  \n... Enter \"x\" to exit (: \n\n";

			read_input(area_choice);

			switch(area_choice)
			{
			case'a':
				square_area();    
				cout<<"\n\n";
				break;
			case'b':
				rectangle_area();
				cout<<"\n\n";
				break;
			case'c':
				circle_area();
				cout<<"\n\n";
				break;
			case'd':
				triangle_area();
				cout<<"\n\n";
				break;
			case'x':
				cout<<"\n \t Thank you for using my program!\n Press Enter to continue\n";
				break;
			default:
				cout<<"\n \t Character not from choices\n Press Enter to continue\n";
			}
			break;

		case'c':
			cout<< "\n \t a)Square  b)Rectangle   c)Circle \n ... Enter \"x\" to exit (: \n\n";

			read_input(perimeter_choice);

			switch(perimeter_choice)
			{
			case'a':
				square_perimeter();
				cout<<"\n\n";
				break;
			case'b':
				rectangle_perimeter();
				cout<<"\n\n";
				break;
			case'c':
				circle_circumference();
				cout<<"\n\n";
				break;
			case'x':
				cout<<"\n \t Thank you for using my program!\n Press Enter to continue\n";
				break;
			default:
				cout<<"\n \t Character not from choices \n Press Enter to continue\n";
			}
			break;
		case'd':
			rounding_numbers();
			cout<<"\n\n";
			break;
		case'e':
			gcd_formula();
			break;
		case'f':
			lcm_formula();
			break;

		case 'g':
			odd_even();
			break;
		case 'h':
			isprime();
			break;
		case 'i':
			factors();
			break;
		case'x':
			cout<<"\n \t Thank you for using my program!\n Press Enter to continue\n";
			break;
		default:
			cout<<"\n \t Character not from choices \n Press Enter to continue\n";
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}

	return 0;

}

