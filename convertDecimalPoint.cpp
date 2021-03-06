#include <bits/stdc++.h>
using namespace std;

//converting decimal to binary number
string convert_tobinary(double num, int k_prec)
{
   string binary = "";

   //getting the integer part
   int Integral = num;

   //getting the fractional part
   double fractional = num - Integral;

   //converting integer to binary
   while (Integral)
   {
      int rem = Integral % 2;
      binary.push_back(rem + '0');
      Integral /= 2;
   }

   //reversing the string to get the
   //required binary number
   reverse(binary.begin(), binary.end());
   binary.push_back('.');

   //converting fraction to binary
   while (k_prec--)
   {
      fractional *= 2;
      int integ_bit = fractional;
      fractional -= integ_bit;
      binary.push_back(integ_bit + '0');
   }

   return binary;
}

int main()
{
   double n = 0.625;
   int k = 3;
   cout << convert_tobinary(n, k) << "\n";
   n = 6.986, k = 5;
   cout << convert_tobinary(n, k);
   return 0;
}
