
#include <iostream>
using namespace std;

//example of bad programming practice
//just illustrating pointers
void add(int *x, int y) {
	*x = *x + y;
}

void add2(int &x, int y) {
	x = x + y;
}


int main () {
	int a = 10;
	int *b;
	int *c;
	int v[10] = {1,2,3,4,5,6,7,8,9,10};

	// & stands for address: assigns the address of a to the pointer b
	// * stands for the contents of a pointer
	b = &a;
	cout << "b: " << b << ", *b: " << *b << endl << endl;

	// assigns a pointer to another
	c = b;
	cout << "*c: " << *c << endl << endl;

	//changes the content of c (and of all variables that are pointing to it)
	*c = 35;
	cout << "*c: " << *c << ", a: " << a << ", *b: " << *b << endl<< endl;

	//passing arguments as reference
	a=10;
	add(&a, 10);
	cout << "after add --> a: " << a << endl<<endl;

	a=10;
	b = &a;
	add(b, 10);
	cout << "after add --> a: " << a << endl<<endl;

	a=10;
	add2(a, 10);
	cout << "after add2 --> a: " << a << endl<<endl;

	//write an array
	for (int i =0; i<9; i++) {
		cout << v[i] << ", ";
	}
	cout << v[9] << endl;

	// pointer to an array
	c = v;
	// write array using pointer arithmetics
	for (int i=0; i<9; i++) {
		cout << *c++ << ", ";
	}
	cout << *c << endl;

	c = new int(7);
	cout << "C: " << *c << endl;

	(*c)++;
	cout << "C: " << *c << endl;

	delete c; //memory dealocation

}
