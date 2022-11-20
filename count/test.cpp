#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	vector<int> v;
 
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(1);
	v.push_back(5);
 
	cout << "Original Vector: ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n\n";
 
	sort(v.begin(), v.end());
 
	cout << "Sorted Vector: ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n\n";
 
	v.erase(unique(v.begin(), v.end()), v.end());
 
	cout << "unique + erase: ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n\n";
 
}