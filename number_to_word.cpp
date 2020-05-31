#include<iostream>
using namespace std;

string ones[] = { "","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};

string tens[] = {"","","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninety "};

string convertSubNumToWord(int n,string str)
{
	    string temp = "";
		if(n>19)
		{
			temp += tens[n/10] +  ones[n%10];
		}
		else {
			temp += ones[n];
		}
		if(n)
		{
			temp += str;
		}
		return temp;
}

string number_to_word(long n)
{
	string result = "";
	result += convertSubNumToWord(n/10000000,"crore ");
	
	result += convertSubNumToWord(((n/100000)%100),"lakh ");
	
	result += convertSubNumToWord(((n/1000) % 100),"thousand ");
	
	result += convertSubNumToWord(((n/100) % 10),"hundred ");
	
//	if(n > 100 && n % 100) result += "and ";
	
	result += convertSubNumToWord(n % 100,"");
	
	return result;
}

int main()
{
	long n;
	cin>>n;
	cout<<number_to_word(n)<<endl;
	return 0;
}