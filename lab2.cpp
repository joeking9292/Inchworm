/*
 * @file: lab2.cpp
 * @author: Joe Noonan
 * @ "Seattle University, CPSC2430, Spring 2018"
 */

#include "Terminal.h"
#include "InchWorm.h"
#include "PixelMatrix.h"
#include "RGB.h"
#include <iostream>

using namespace std;

int main() {
  InchWorm worm(10, 10);
  std::string f = "Cody the InchWorm Simulator.";
  std::string b = "n - next move.";
  std::string c = "b - reverse back.";
  std::string d = "r - rotate.";
  std::string e = "q - quit.";
  
  PixelMatrix pxmText(0, 0, RGB::BLACK);
  Terminal a;
  a.setText(1, 1, f);
  a.setText(2, 2, b);
  a.setText(3, 3, c);
  a.setText(4, 4, d);
  a.setText(5, 5, e);
  a.paint(pxmText);

  Terminal t;
  int rows = 150;
  int cols = 150;
  char userInput;
  while(userInput != 'q'){
    PixelMatrix pxm(rows, cols, RGB::BLACK);
    t.paint(pxm);
    worm.render(pxm);
    t.paint(pxm);
    cin >> userInput;
    if(userInput == 'q'){
      return 0;
    }
    else if(userInput == 'n'){
      worm.move();
    }
    else if(userInput == 'r'){
      worm.rotate();
    }
    else if(userInput == 'b'){
      worm.reverse();
    }
  }
  return 0;
}
