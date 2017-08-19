#include <iostream>
#include <tinyxml.h>
#include "tinystr.h"

using namespace std;

int main() {
	TiXmlDocument doc("text.xml");
	doc.LoadFile();
	return 0;
}
