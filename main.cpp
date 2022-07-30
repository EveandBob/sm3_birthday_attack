#include<iostream>
using namespace std;



int main() {
	int a = 1;
	char b[4];
	b[0] = char(a + int('0'));
	b[1] = '\0';
	cout << b;



}
