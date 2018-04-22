 #include "ramCanvas.h"
        #include <math.h>
        #include <complex>
        #include <iostream>
                  
        #define pi 3.14159265359
                  
        using namespace mjr;
                  
        int main(void) {
          int   MaxCount = 255;
          int   MultCol  = 15;
          float Tol      = .0001;
          std::complex<double> r1(1,               0);
          std::complex<double> r2(-0.5,  sin(2*pi/3));
          std::complex<double> r3(-0.5, -sin(2*pi/3));
          ramCanvas4c8b theRamCanvas = ramCanvas4c8b(4096, 4096, -2.0, 2, -2, 2); 
                  
          for(int y=0;y<theRamCanvas.get_numYpix();y++) {
            for(int x=0;x<theRamCanvas.get_numXpix();x++) {
              std::complex<double> z(theRamCanvas.int2realX(x), theRamCanvas.int2realY(y));
              int  count = 0;
              while((count < MaxCount) && (abs(z-r1) >= Tol) && (abs(z-r2) >= Tol) && (abs(z-r3) >= Tol)) {
                if(abs(z) > 0)
                  z = z-(z*z*z-1.0)/(z*z*3.0);
                count++;
              }
                  
              if(abs(z-r1) < Tol)
                theRamCanvas.drawPoint(x, y, color4c8b(255-count*MultCol, 0, 0));
              if(abs(z-r2) <= Tol)
                theRamCanvas.drawPoint(x, y, color4c8b(0, 255-count*MultCol, 0));
              if(abs(z-r3) <= Tol)
                theRamCanvas.drawPoint(x, y, color4c8b(0, 0, 255-count*MultCol));
            }
          }
          theRamCanvas.writeTGAfile("-");
        }