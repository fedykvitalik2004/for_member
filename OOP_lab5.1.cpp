#include <iostream>
#include "Sphere.h"
#include "Parallelepiped.h"
#include "Pyramid.h"
#include "Tetrahedron.h"

using namespace std;

int main()
{
    Volume** vol=new Volume *[4];
    double a, b, c;

    cout << "Parallelepiped: " << endl;
    cout << " x="; cin >> a;
    cout << " y="; cin >> b;
    cout << " z="; cin >> c;

    vol[0] = new Parallelepiped(a, b, c);
    cout << "Volume of parallelepiped is " << vol[0]->volume() << endl << endl;
    delete[] vol[0];
   
    cout << "Pyramid: " << endl;
    cout << " x="; cin >> a;
    cout << " y="; cin >> b;
    cout << " h="; cin >> c;

    vol[1] = new Pyramid(a, b, c);
    cout << "Volume of pyramid is " << vol[1]->volume() << endl << endl;
    delete[] vol[1];

    cout << "Tetrahedron: " << endl;
    cout << " a="; cin >> a;

    vol[2] = new Tetrahedron(a);
    cout << "Volume of tetrahedron is " << vol[2]->volume() << endl << endl;
    delete[] vol[2];

    cout << "Sphere: " << endl;
    cout << " R="; cin >> a;

    vol[3] = new Sphere(a);
    cout << "Volume of sphere is " << vol[3]->volume() << endl << endl;
    delete[] vol[3];

    delete[] vol;

    return 0;
}
