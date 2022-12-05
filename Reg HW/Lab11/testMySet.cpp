/**
 * Author               Abel Lagonell
 * Email:               alagonell@floridapoly.edu
 * Creation date:       2022-12-03 16:19:14
*/

#include "MySet.cpp"

int main(){
    cout << 
    "1) Creates a first MySet object s1 with range of numbers [0; 20]" << endl <<
    "s1 = "; MySet s1 = MySet(20); s1.printSet();
    cout << "s1.insertElement(13):" << endl <<
    "s1 = "; s1.insertElement(13); s1.printSet();
    cout << "s1.insertElement(7):" << endl <<
    "s1 = "; s1.insertElement(7); s1.printSet();
    cout << "s1.insertElement(20):" << endl <<
    "s1 = "; s1.insertElement(20); s1.printSet();
    cout << "s1.insertElement(21):" << endl <<
    "s1 = "; s1.insertElement(21); s1.printSet();
    cout << "s1.deleteElement(22):" << endl <<
    "s1 = "; s1.deleteElement(22); s1.printSet();
    cout << "s1.deleteElement(13):" << endl <<
    "s1 = "; s1.deleteElement(13); s1.printSet();
    cout << 
    "6) Creates a second MySet object s2 with range of numbers [0; 100]" << endl <<
    "s2 = "; MySet s2 = MySet(100); s2.printSet();
    cout << "s2.isEqualTo(s1) = " << s2.isEqualTo(s1) << endl <<
    "8) Creates a third MySet object s3 with the copy constructor with the first object as the argument" << endl <<
    "s3 = "; MySet s3 = MySet(s1); s3.printSet();
    cout << "s3.isEqualTo(s1) = " << s3.isEqualTo(s1); 

    return 0;
}