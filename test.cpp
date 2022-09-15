  #include <iostream>
  #include <cmath>
  #include <cstring>
  #include <iomanip>

  using namespace std;


double area (double n, double s){
  double area = (n *pow(s,2))/(4*tan(M_PI/n));

  return area;
}

#define POLYGONS	5 // currently only 5 triangles at most can be recorded
double triangles[POLYGONS][3];

void printrecords(const double triangles[][3], const int records) {
	// print table header
	cout << left // left align
		<< setprecision(2)
		<< showpoint
		<< fixed;

	cout << setw(12) << "Triangle#"
		<< setw(10) << "n"
		<< setw(10) << "s"
		<< setw(10) << "Area"
		<< endl;
	// print each record
	for (int i = 0; i < records; i++)
	{

		cout << setw(12) << i + 1; // "Polygon #"
		for (int j = 0; j < 3; j++)
		{
			cout << setw(10) << triangles[i][j];
		}
		cout << endl;

	}
}

int main(){
  

  double a, b, c; // 3 sides
	double A, B, C; // 3 internal angles

	char cmd;
	bool legal = true;
	double tarea;

	int triangle = 0, current = 0; // triangle index
	int times = 0; // how many times played
	int records = 0; // current number of records <= POLYGONS

	cout << "Polygon Guru!" << endl;
	cout << "==============" << endl;

	while (true)
	{
		cout << "Please enter a command:";
		cin >> cmd;
		cout << endl;

		switch (cmd)
		{
		case 'n':
		case 'N':
			do
			{
				
				// 7. Add user inputand output
				cout << "Please enter the number of sides and how long the sides are: ";
					
				cin >> a >> b;
				cout << endl;
				legal = (a > 0) && (b > 0);

			} while (!legal);
			// record the three sides of a triangle
			triangles[triangle][0] = a;
			triangles[triangle][1] = b;

			// a trick to hold the current triangle
			current = triangle;
			// move to the next record, if it's full, wrap back from the beginning
			triangle++;	
			triangle %= POLYGONS;

			times++;
			records = (times < POLYGONS) ? times : POLYGONS;

			break;
		case 'a':
		case 'A':
			tarea = area(a,b);
			cout << "The area: " << tarea << endl;
			// record the result
			triangles[current][2] = tarea;
			break;
		case 'p':
		case 'P': // print out the records
			printrecords(triangles, records);
			break;
		case 'q':
		case 'Q':
			cout << "Are you sure you want to quit?(Y/N):" ;
			while (true)
			{
				cin >> cmd;
				cout << endl;
				if (cmd == 'Y' || cmd == 'y')
					return 1;
				else
					break;
			}
			
			break;
		default:
			break;
		}

	}

  return 0;
}

