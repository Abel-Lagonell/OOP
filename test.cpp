  #include <iostream>
  #include <cmath>
  using namespace std;

double inAngle(double f, double n, double m){
  double ang;
  ang = acos((pow(n,2)+pow(m,2)-pow(f,2))/(2*n*m));
  ang *= 180/M_PI;
  return ang;
}

double area(double a, double b, double c){
  double s = (a+b+c)/2;

  double area = sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
  

  //Calculate the three internal angles and area
  
  double a,b,c; //3 sides of triangle
  double A,B,C; //3 angles of triangle
  bool legal = true;

  do{
    cout << "Triangle Guru!"<< endl;
    cout << "Please input the sides of the triangle seperated by ENTER: " << endl;
    cin >> a >> b >> c;
      legal = a>0 && b>0 && c>0 && (a+b >c) && (a+c >b) && (c+b >a);
  } while(!legal);
  
  A = inAngle(a,b,c);
  B = inAngle(b,a,c);
  C = inAngle(c,b,a);
  
  double tarea = area(a,b,c);

  cout << "The area is: " << area << "\nWith the angles being: \n A:" << A << "\t B: " << B << "\tC: " << C << endl;

  return 0;
}

