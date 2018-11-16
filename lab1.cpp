#include <iostream>
#include "CrowWorld.h"
using namespace std;

int main() {
	CrowWorld w(3963.1676, 25.0, "data");
	cout << w.getDistance("Nashville", "Timbuktu") << endl;
	cout << w.getFlytime("Nashville", "Timbuktu") << endl;
}
