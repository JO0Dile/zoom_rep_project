 // Lab 1 - Guided example: recursive sum 1..n, printed step by step
2 #include <iostream>
3 using namespace std;
4
5 int sumTo(int n) {
6 cout << "enter sumTo(" << n << ")" << endl;
7 if (n == 0) { // base case
8 cout << "base case: return 0" << endl;
9 return 0;
10 }
11 int result = n + sumTo(n - 1); // recursive case
12 cout << "sumTo(" << n << ") returns " << result << endl;
13 return result;
14 }
15
16 int main() {
17 int total = sumTo(3);
18 cout << "Total = " << total << endl;
19 r
