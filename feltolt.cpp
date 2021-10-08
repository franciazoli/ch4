#include "std_lib_facilities.h"
int main()
{
double a = 0; //value
double maxval = 0;
double minval = 0;
string unit = " ";
double sum=0;
double numberval =0;
vector<double> vektor;
cout << "Enter a number with a unit behind it (m, cm, ft, in) \nFor example: 2m, 3cm, 4ft, 5in\nTo exit type '|'\n";
while(cin >> a >> unit)
{
	if(a== '|')
	{
	break;
	}
	else
	{
	numberval++;
	if(unit == "m")
	{
	a = a;
	}
	else if(unit == "cm")
	{
	a = a/100;
	}
	else if(unit=="ft")
	{
	a = a/3.28;
	}
	else if(unit=="in")
	{
	a=a/39.37;
	}
	else
	{
	cout << "Unknown unit";
	cin >> a;
	}
	cout << a << '\n';
	if(maxval==0)
	{
	maxval = a;
	cout << "\nthe largest so far \n";
	}
	else if(maxval<a)
	{
	maxval = a;
	cout << "\nthe largest so far \n";
	}
	else
	{
		if(minval==0)
		{
		minval=a;
		cout << "\nthe smallest so far\n";
		}
		else if(minval>a)
		{
		minval=a;
		cout << "\nthe smallest so far\n";
		}
	}
	}
	vektor.push_back(a);
	sum = sum+a;
}
sort (vektor);
cout << "\nSorted values: \n";
for (int i=0; i<vektor.size();i++)
{
	cout<<vektor[i]<<"m \n";
}
cout << "\nMaximum value: " << maxval 
		<< "\nMinimum value: " << minval
		<< "\nSum of values : " << sum << "m"
		<< "\nNumber of values entered: " << numberval << '\n';
return 0;
}
