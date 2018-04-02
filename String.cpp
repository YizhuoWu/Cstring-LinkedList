#include "String.h"
using namespace std;
#include <iostream>
String::String(const char * s)
{
	this->head = ListNode::stringToList(s);
}
String::String(const String & s)
{
	this->head = ListNode::copy(s.head);
}
String String::operator = (const String & s)
{
	ListNode * result = ListNode::copy(s.head);
	ListNode::deleteList(this->head);
	this->head = result;
	return *this;
}
char & String::operator [] (const int index)
{
	static char c = 0;
	ListNode * result = this->head;
	if (inBounds(index))
	{
		int i;
		for (int i = 0;i < index; i++)
		{
			result = result->next;
		}
		return result->info;
	}
	else
	{
		cout << "Index is out of bounds." << endl;
		return c;
	}
}
int String::size() const
{
	return ListNode::length(this->head);
}
int String::indexOf(char c) const
{
	int i;
	ListNode*result = this->head;
	for (i = 0;result != nullptr; i++)
	{
		if (result->info == c)
		{
			return i;
		}
		result = result->next;
	}
	return -1;
}
bool String::operator == (const String & s) const
{
	return ListNode::compare(this->head, s.head) == 0;
}
bool String::operator < (const String & s) const
{
	return ListNode::compare(this->head, s.head) < 0;
}
String String::operator + (const String & s) const
{
	String result;
	result.head = ListNode::append(this->head, s.head);
	return result;
}

String String::operator += (const String & s)
{
/*
	ListNode*result = ListNode::append(this->head, s.head);
	ListNode::deleteList(this->head);
	this->head = result;
	return *this;
*/

	ListNode*old = this->head;
	this->head = String::ListNode::append(this->head,s.head);
	ListNode::deleteList(old);
	return *this;
	
}
String String::reverse()const
{
	ListNode*a = ListNode::reverse(this->head);
	String result;
	result.head = a;
	return result;
}
void String::print(ostream & out)const
{
	ListNode*result = this->head;
	while (result != nullptr)
	{
		out << result->info;
		result = result->next;
	}
}

void String::read(istream & in)
{
	char a[1024];
	in.getline(a, 1024);
	ListNode::deleteList(this->head);
	this->head = ListNode::stringToList(a);

}

String::~String()
{
	ListNode::deleteList(this->head);
}

bool String::inBounds(int i)
{
	return i >= 0 && i < size();
}


String::ListNode * String::ListNode::stringToList(const char *s)
{
	return !*s ? 0 : new ListNode(*s, stringToList(s + 1));
}

String::ListNode * String::ListNode::copy(ListNode * L) 
{
	return L == nullptr ? nullptr : new ListNode(L->info, copy(L->next));
}
String::ListNode * String::ListNode::reverse(ListNode * L)
{
	ListNode * result = nullptr;
	for (ListNode * p = L; p != nullptr;p = p->next)
	{
		result = new ListNode(p->info, result);
	}
	return result;
}
String::ListNode *String::ListNode::append(ListNode * L1, ListNode * L2) 
{
	return L1 == nullptr ? copy(L2)
		: new ListNode(L1->info, append(L1->next, L2));
}

int String::ListNode:: compare(ListNode * L1, ListNode * L2)
{
	ListNode*a1 = L1;
	ListNode*a2 = L2;

	if (a1 == nullptr && a2 == nullptr)
	{
		return 0;
	}
	if (a1 == nullptr)
	{
		return -1;
	}
	if (a2 == nullptr)
	{
		return 1;
	}

	if (a1->info != a2->info)
	{
		return ((a1->info)-(a2->info));
	}
	else
	{
		a1 = a1->next;
		a2 = a2->next;
		return ListNode::compare(a1,a2); 
	}
	
}


void String::ListNode::deleteList(ListNode * L)
{
	if (L != NULL)
	{
		deleteList(L->next);
		delete L;
	}
}
int String::ListNode::length(ListNode * L)
{
	return L == 0 ? 0 : 1 + length(L->next);
}


ostream & operator << (ostream & out, String str)
{
	str.print(out);
	return out;
}
istream & operator >> (istream & in, String & str)
{
	str.read(in);
	return in;
}
