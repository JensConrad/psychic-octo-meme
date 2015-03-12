sudo apt-get install gcc build-essential
./configure && make

#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b,c,d,n1,n2,n3,x1,x2,x8,q=0,o=0;
    double i;

    cout << "Willkommen zum Integrator! \nf(x)= ax^n1+bx^n2+cx^n3+d von x2 nach x1 \nx2 sybolisiert den niedriegeren Wert!" << endl;
       cout << "Bitte geben Sie den Faktor a ein!" << endl;
    cin >> a;
    cout << "Bitte geben Sie die Potenz n1 ein!" << endl;
    cin >> n1;
    cout << "Bitte geben Sie den Faktor b ein!" << endl;
    cin >> b;
    cout << "Bitte geben Sie die Potenz n2 ein!" << endl;
    cin >> n2;
    cout << "Bitte geben Sie den Faktor c ein!" << endl;
    cin >> c;
    cout << "Bitte geben Sie die Potenz n3 ein!" << endl;
    cin >> n3;
    cout << "Bitte geben Sie d ein!" << endl;
    cin >> d;
    do
    {
    cout << "Bitte geben Sie x2 ein!" << endl;
    cin >> x2;
    cout << "Bitte geben Sie x1 ein!" << endl;
    cin >> x1;

    if(x1<=x2)
    {
    cout << "FEHLER: x2 muss kleiner als x1 sein!" << endl;
    }
    }
   while(x1<=x2);

    system("cls");

    cout << "Die eingegebene Formel lautet: f(x)=" << a << "x^" << n1 << "+" << b << "x^" << n2 << "+" << c << "x^" << n3 << "+" << d << " von " << x2 << " nach " << x1 << "." << endl;

    if (x2>=0)
   {
      x8=x2;
   }
   else
   {
      x8=-x2;
   }

    q=(x1+x8)*10;
    double y[q],y3=0;


    for(i=x2;i<=x1+0.1;i=i+0.1)
    {
        o=o++;
       y[o]=a* pow (i, n1) +b* pow (i, n2) +c* pow (i, n3) +d;

        if (y[o]>=0)
        {
            y[o]=y[o];
        }
        else
        {
            y[o]=-y[o];
        }
        y[o]=y[o]*0.1;
        y3=y3+y[o];
    }
    cout << "Ihre Flaeche ist: " << y3 << " Flaecheneinheiten gross.";

return 0;
}
