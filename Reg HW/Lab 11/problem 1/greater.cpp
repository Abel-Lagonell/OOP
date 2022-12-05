/**
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Creation date:       2022-12-03 16:19:14
*/


#include <iostream>
using namespace std;

template<typename T>
bool isGreater(const T list1 [], const T list2 [], int size1, int size2){
	T a = list1[0];
	T b = list2[0];

	for (int i = 1; i < size1; i++)
		if (list1[i] < a)
			a = list1[i];

	for (int i = 1; i < size2; i++)
		if (list2[i] > b)
			b=list2[i];
	return (a > b);
}

int main(){
    int a[] = {9,10,11,23};
	int b[] = {5,3,2,7};
	cout << "{9,10,11,23} > {5,3,2,7}? " << isGreater<int> (a,b,4,4) << endl;
	double c[] = {9.4,10.3,11.2,2.3};
	double d[] = {5.1,3.2,2.3,7.4};
	cout << "{9.4,10.3,11.2,2.3} > {5.1,3.2,2.3,7.4}? " << isGreater<double> (c,d,4,4) << endl
	;
	string e[] = {"Miami","Lakeland","Tampa","Orlando"};
	string f[] = {"Dallas","Austin","Antonia"};
	cout << "{\"Miami\",\"Lakeland\",\"Tampa\",\"Orlando\"} > {\"Dallas\",\"Austin\",\"Antonia\"}? " << isGreater<string> (e,f,4,3) << endl;


    return 0;
}