#include <vector>
#include <iostream>
using namespace std;

//template <class _Ty>
//class matrix : public vector {
//	template<class>
//	using vector::vector;
//	initializer_list<_Ty> _Ilist;
//};

int main() {
	// matrix x = { 1, 2, 3 };
	vector<int> x = { 1, 2, 3 };
	vector<int>::value_type a = 12;
	cout << x[0];
	return 0;
}