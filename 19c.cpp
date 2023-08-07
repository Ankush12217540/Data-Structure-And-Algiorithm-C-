/*Lists are sequence containers that allow non-contiguous memory allocation.
 As compared to the vector, the list has slow traversal, but once a position
  has been found, insertion and deletion are quick (constant time). Normally, when we say a List, we talk about a doubly linked list. For implementing a singly linked list, we use a forward_list.

std::list is the class of the List container. It is the part of C++ Standard Template Library (STL) and is defined inside <list> header file.

Syntax:

std::list <data-type> name_of_list;
*/


// C++ program to demonstrate the implementation of List
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

// function for printing the elements in a list
void showlist(list<int> g)
{
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

// Driver Code
int main()
{

	list<int> gqlist1, gqlist2;

	for (int i = 0; i < 10; ++i) {
		gqlist1.push_back(i * 2);
		gqlist2.push_front(i * 3);
	}
	cout << "\nList 1 (gqlist1) is : ";
	showlist(gqlist1);

	cout << "\nList 2 (gqlist2) is : ";
	showlist(gqlist2);

	cout << "\ngqlist1.front() : " << gqlist1.front();
	cout << "\ngqlist1.back() : " << gqlist1.back();

	cout << "\ngqlist1.pop_front() : ";
	gqlist1.pop_front();
	showlist(gqlist1);

	cout << "\ngqlist2.pop_back() : ";
	gqlist2.pop_back();
	showlist(gqlist2);

	cout << "\ngqlist1.reverse() : ";
	gqlist1.reverse();
	showlist(gqlist1);

	cout << "\ngqlist2.sort(): ";
	gqlist2.sort();
	showlist(gqlist2);

	return 0;
}





















/*
Points to Remember about List Container
It is generally implemented using a dynamic doubly linked list with traversal in both directions.
Faster insert and delete operation as compared to arrays and vectors.
It provides only sequential access. Random Access to any middle element is not possible
It is defined as a template so it is able to hold any data type.
It operates as an unsorted list would, which implies that by default, the list’s order is not preserved. However, there are techniques for sorting.

*/