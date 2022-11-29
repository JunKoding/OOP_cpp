#include <fstream>
#include <iostream>
#include <string>


using namespace std;


int main() {
// ofstream	
/*
	ofstream ofs("output2.txt", ios::app);

	ofs << "Hello world!!\n";
	

	ofstream ofs("c://output.txt", ios::app);

	if(!ofs) {
		cout << "Error!\n";
	} else {
		ofs << "Hello world\n";
	} // Error
*/
	ofstream ofs("output.txt", ios::app);

	ofs << "\n";

// ifstream
/*
	ifstream ifs("output2.txt");

	string first, second;

	ifs >> first  >> second;
	cout << first << endl << second << endl;
*/

	ifstream ifs("output.txt", ios::binary);

	char c;
	ifs.get(c);
	cout << showbase << hex << (int) c << endl;
}
