#include "String.h"
#include <iostream>
using namespace std;

void test_constructors_and_print()
{
	String a("Hello World!");
	String b("This is a sentence.");
	String c("Word");

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

}

void test_assignment()
{
	String a("ICS45C");
	String b("ICS33");
	String c("ICS6D");
	cout << "Now a is " << a << endl;
	cout << "Now b is " << b << endl;
	cout << "Now c is " << c << endl;
	cout << "" << endl;
	b = a;
	c = a;
	cout << "Now a is " << a << endl;
	cout << "Now new b is " << b << endl;
	cout << "Now new c is " << c << endl;

}

void test_relations()
{
	String a("BM");
	String b("BM");
	String c("BMW");
	String d("Mercedes");
	String e("Mercedes-Benz");

	cout << "The String a is " << a << endl;
	cout << "The String b is " << b << endl;
	cout << "The String c is " << c << endl;
	cout << "The String d is " << d << endl;
	cout << "The String e is " << e << endl;
	cout << "" << endl;
	
	cout << "Testing 'a==b'..." << endl;
		cout << (a==b) << endl;

	cout << "Testing 'a<c' and 'd<e'..." << endl;
		cout << (a<c) << endl;
		cout << (d<e) << endl;
	cout << "" << endl;
	
}

void test_reverse()
{
	String a("Hello World!");
	String b("1234567");
	String c("Lexus");

	cout << "The String a is " << a << " and the reversr of it is " << a.reverse() << endl;
	cout << "The String b is " << b << " and the reversr of it is " << b.reverse() << endl;
	cout << "The String c is " << c << " and the reversr of it is " << c.reverse() << endl;
	cout << "" << endl;

}
void test_concatenation()
{
	String a("Ferrari");
	String b(" 488");
	String c(" is an expensive car.");

	cout << "The String a is " << a << endl;
	cout << "The String b is " << b << endl;
	cout << "The String c is " << c << endl;
	cout << "And a + c is " << a + c << endl;
	cout << "And a + b is " << a + b << endl;
	cout << "" << endl;


}

void test_add_equal()
{
	String a("Horse ");
	String b(" Pig ");
	String c(" Tiger ");
	cout << "The string a is " << a << endl;
	cout << "The string b is " << b << endl;
	cout << "The string c is " << c << endl;
	a += c;
	b += c;
	cout << "a += c is" << a << endl;
	cout << "b += c is" << b << endl;
	cout << "" << endl;
}

void test_size()
{
	String a("China");
	String b("Korea");
	String c("Australia");

	cout << "The string a is " << a << endl;
	cout << "The string b is " << b << endl;
	cout << "The string c is " << c << endl;
	cout << "" << endl;
	cout << "The size of string a is " << a.size() << endl;
	cout << "The size of string b is " << b.size() << endl;
	cout << "The size of string c is " << c.size() << endl;
	cout << "" << endl;


}

void test_index()
{
	String a("China");
	String b("Korea");
	String c("Australia");

	char& x = a[0];
	char& y = b[1];
	char& z = c[2];
	cout << "The string a is " << a << endl;
	cout << "The string b is " << b << endl;
	cout << "The string c is " << c << endl;
	cout << "" << endl;
	cout << "The first letter of " << a << " is " << x << endl;
	cout << "The second letter of " << b << " is " << y << endl;
	cout << "The third letter of " << c << " is " << z << endl;
	cout << "" << endl;

}


void test_indexOf()
{
	String a("China is big.");
	String b("Korea is beautiful.");
	String c("Australia");

	cout << "The string a is " << a << endl;
	cout << "The string b is " << b << endl;
	cout << "The string c is " << c << endl;

	cout << "" << endl;
	cout << "The letter C occurs at  " << a.indexOf('C') << " position of " << a << endl;
	cout << "The letter o occurs at  " << b.indexOf('o') << " position of " << b << endl;
	cout << "The letter u occurs at  " << c.indexOf('u') << " position of " << c << endl;
	cout << "" << endl;

}



int main()

{
	cout << "Started Testing 'test_constructors_and_print'..." << "\n" << endl;
	test_constructors_and_print();
	cout << "" << endl;

	
	cout << "Started Testing 'test_assignment'..." << "\n" << endl;
	test_assignment();
	cout << "" << endl;

	cout << "Started Testing 'test_relations'.." << endl;
	test_relations();
	cout<<""<<endl;

	cout << "Started Testing 'test_reverse'.." << endl;
	test_reverse();

	cout << "Started Testing 'test_concatenation'.." << endl;
	test_concatenation();
	

	cout << "Started Testing 'test_add_equal'.." << endl;
	test_add_equal();


	cout << "Started Testing 'test_size'.." << endl;
	test_size();
	
	cout << "Started Testing 'test_index'.." << endl;
	test_index();

	cout << "Started Testing 'test_indexOf'.." << endl;
	test_indexOf();

	
	return 0;

}

