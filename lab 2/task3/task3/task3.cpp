#include<iostream>
using namespace std;

int to_decimal(char num[], int base);
void convert(int result, int base, char num1[], char num2[]);
int value(char num);

int main()
{
	char n1[100], n2[100];
	int base;
	cout << "Enter base system: " << endl;
	cin >> base;
	bool base_ = false;
	while (base_ == false)
	{

		if (base == 2 || base == 8 || base == 10 || base == 16)
		{
			base_ = true;
		}
		else
		{
			cout << "Invalid base enetered! Try again: ";
			cin >> base;
			base_ = false;
		}

	}
	cout << "Enter number 1 with base: " << endl;
	cin >> n1;
	int num_1 = to_decimal(n1, base);
	while (num_1 == -1)
	{
		cout << "Invalid Number entered! Try again: ";
		cin >> n1;
		num_1 = to_decimal(n1, base);
	}
	cout << "Enter number 2 with base: " << endl;
	cin >> n2;
	int num_2 = to_decimal(n2, base);
	while (num_2 == -1)
	{
		cout << "Invalid Number entered! Try again: ";
		cin >> n2;
		num_2 = to_decimal(n2, base);
	}

	int carry;
	while (num_2 != 0) {
		carry = num_1 & num_2;
		num_1 = num_1 ^ num_2;
		num_2 = carry << 1;
	}
	convert(num_1, base, n1, n2);
	return 0;
}


int to_decimal(char num[], int base)
{
	int length = strlen(num);
	int x = 1, decvalue = 0;
	for (int i = length - 1; i >= 0; i--)
	{
		int number = value(num[i]);
		if (number >= base)
		{
			return -1;
		}
		else
		{
			decvalue += number * x;
			x = x * base;
		}
	}
	return decvalue;
}
void convert(int result, int base, char num1[], char num2[])
{
	if (base == 2)
	{
		int rem, bin_val = 0, x = 1;
		while (result > 0)
		{
			rem = result % 2;
			result /= 2;
			bin_val += (rem * x);
			x *= 10;
		}
		cout << "The answer is: " << endl;
		cout << "(" << num1 << ") + (" << num2 << ") = " << bin_val;
	}
	else if (base == 8)
	{
		int rem, i = 0, oct_val = 0, x = 1;
		while (result > 0)
		{
			rem = result % 8;
			oct_val += +rem * x;
			result /= 8;
			x *= 10;
		}
		cout << "The answer is: " << endl;
		cout << "(" << num1 << ") + (" << num2 << ") = " << oct_val;
	}
	else if (base == 16)
	{
		char converter[100];
		int i = 0;
		while (result > 0)
		{
			int rem = 0;
			rem = result % 16;
			result /= 16;
			if (rem < 10)
			{
				converter[i] = (rem + 48);
				i++;
			}
			else {
				converter[i] = (rem + 55);
				i++;
			}

		}
		cout << "The answer is: " << endl;
		cout << "(" << num1 << ") + (" << num2 << ") = ";
		for (int j = i - 1; j >= 0; j--)
		{
			cout << converter[j];
		}

	}
	else
	{
		cout << "The answer is: " << endl;
		cout << "(" << num1 << ") + (" << num2 << ") = " << result;
	}

}
int value(char num)
{
	if (num >= '0' && num <= '9')
		return (int)(num - '0');
	else
		return (int)(num - 'A' + 10);
}