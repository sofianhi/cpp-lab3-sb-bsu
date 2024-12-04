#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int k, i = 1, sum_k = 0, number;
while (true) {
cout << " Enter the amount of integers to sum = "; cin >> k;
if (k <= 0) { cout << "Error" << endl; continue; }
break;
}
do {
cout << "Enter integer nr. " << i << ": ";
if (cin >> number) {
sum_k += number; i++;
} else {
cout << "Invalid input. Please enter an integer." << endl;
cin.clear();
}
} while (i <= k);
cout << " The total sum of " << k << " integers is: " << sum_k;
return 0;
}
