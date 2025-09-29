#include <ostream>
#include <vector>
#include "container.h"
#include "foreach.h"
#include "util.h"

using namespace std;

void ope1(int &n){ n++; }

void DemoVector(){
    vector<int> vec = {3, 5, 7 ,1, 9, 4};
	cout << "Init. vector:"<< endl;
	foreach(vec, ::Print<int>);
	cout << endl; 
    foreach(vec, ope1);
	cout << "n++: ";
    foreach(vec, ::Print<int>);
    cout <<endl;
	cout << "n+=5: ";
    foreach(vec, [](int &n){ n+=5;  } );
    foreach(vec, ::Print<int>);
    cout <<endl;

// TODO Repetir las funcionalidades arriba pero para nuestra
//      CLinkedList

    // foreach(vec.begin(), vec.end(), ope1);
}
