//FUNC MAIN
#include "stack.hpp"

void foo_init() {
	cout << endl << "RUN INIT FILE..." << endl;
	Stack<int> IntArr;
	Stack<char> CharArr;
	cout << "RESULT\t" << "Created 2 arrays: IntArr & CharArr." << endl << endl;
}

void foo_push() {
	cout << endl << "RUN PUSH FILE..." << endl;
	Stack<int> IntArr;
	for(int i = 0; i < 10; i++) { IntArr.push(i*2); }
		
	cout << "RESULT\t";
	for(size_t j = 0; j < IntArr.count(); j++) { cout << IntArr[j] << " "; }
	cout << endl << endl;
}

void foo_pop() {
	cout << endl << "RUN POP FILE..." << endl;
	Stack<double> DoubleArr;
	for(int i = 0; i < 10; i++) { DoubleArr.push(double(i)); }
		
	cout << "RESULT\t";
	for(int j = 0; j < 5; j++) { cout << DoubleArr.pop() << " "; }
	cout << endl << endl;
}

void foo_empty() {
	cout << endl << "RUN EMPTY FILE..." << endl;
	Stack<char> CharArr;

	char slovo[] = "NOITAREDEF_NAISSUR";

	for(int i = 0; i < strlen(slovo); i++) { CharArr.push(slovo[i]); }

	cout << "RESULT\t";
	while(!CharArr.empty()) {
		cout << CharArr.pop() << " ";
	}
	cout << endl << endl;
}