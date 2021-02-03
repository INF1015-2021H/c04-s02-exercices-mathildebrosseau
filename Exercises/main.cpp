///
/// Ce projet utilise quelques librairies disponibles sur Vcpkg et permet entre autre d'en tester le bon fonctionnement.
///


#include <cstddef>
#include <cstdint>

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <span>

#include <tclap/CmdLine.h>
#include <cppitertools/range.hpp>

#include "competition.hpp"
#include "params.hpp"
#include "pointers.hpp"

using namespace std;

const int maxSize = 50;

struct Computer {
	string format, compagnie; double tailleEcranPouces, cpuGHz;
	int memoireRamGiB, memoireDisqueGB;
};

struct ComputerList {
	Computer elems[maxSize];
	int		 numElems = 0;
};


int main() {
	cout << "Parameters example:" << "\n";
	runParamsExample();
	cout << string(50, '-') << "\n";

	cout << "Competition example:" << "\n";
	runCompetitionExample();
	cout << string(50, '-') << "\n";
	
	cout << "1D dynamic arrays example:" << "\n";
	run1DDynamicArrayExample();
	cout << string(50, '-') << "\n";
	
	cout << "2D dynamic arrays example:" << "\n";
	run2DDynamicArrayExample();
	cout << string(50, '-') << "\n";
}

