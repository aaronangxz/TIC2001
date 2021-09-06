#include <iostream>
#include "simpleIntLinkedList.h"
using namespace std;

int main()
{
	List l;

	l.insertHead(123);
	l.insertHead(11);
	l.insertHead(9);
	l.insertHead(1);
	l.insertHead(20);
    
    cout << boolalpha;
    cout << "Empty?" << l.empty() << endl;
    cout << "Head item is " << l.headItem() << endl;
    cout << "Tail item is " << l.tailItem() << endl;
    cout << "Remove tail." << endl;
    l.removeTail();
    cout << "Tail item is " << l.tailItem() << endl;



	for (int i = 0; i < 5; i++) {
		cout << "The current list is: ";
		l.print();
		cout << "Does 9 exist in the list?" << (l.exist(9) ? "Yes" : "No") << endl << endl;
		l.removeHead();
	}
    
    cout << "Empty?" << l.empty() << endl;

	return 0;

}
