#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, x, fa, fb, fx, err_su_x;

  do {
      cout << "inserire estremi" <<endl;
      cin >> a;
      fa = a * a * cos(a) + 1;
      cin >> b;
      fb = b * b * cos(b) + 1;
  } while (fa * fb >= 0.);

  do {
      x = (a + b) * 0.5;
      fx = x * x * cos(x) + 1;

      if( fx == 0) {
          break;
      }

      if( fa*fx < 0) {
          b = x;
      }else {
        a = x;
      }
      err_su_x = abs( (b-a) * 0.5 );
  } while(err_su_x >= 1e-6);


  cout << int(x*10000)/10000.0 <<endl;

  return 0;
}
