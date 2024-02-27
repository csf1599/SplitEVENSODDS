#ifndef ILL
#define ILL
#include "unorderedLinkedList.h"
#include <iostream>
#include <string>
using namespace std;

class intLinkedList : public unorderedLinkedList<int> {
public:
	void splitEvensOddsList(intLinkedList& evensList,intLinkedList& oddsList);
};
#endif
