#include <iostream>
#include <cmath>
using namespace std;

  double px = 0;
  double py = 0;  //position x and position y

  void changePosition(){
    double angle = 0;
    double distance = 0;
    double radian = 0;
    while (2>1){
      cout << "Please enter the direction you would like MrRoboto to move (in degrees, north = 0, East = 90) and the distance in that direction." << endl;
      cout << "Enter -1 and -1 to exit." << endl;
      cin >> angle >> distance;
      /*while(cin.fail() ||  -360 <= angle <= 360 ){
      cin.clear();
          cout << "Error, please enter an angle between 0 and 360 and a positive distance." << endl;
          cin.ignore(256,'\n');
          cin >> angle >> distance;
      }
      */
      if (angle == -1 && distance == -1)
        break;
      angle = abs(angle);
      distance = abs(distance);
      radian = angle * M_PI / 180;
      if(0 < angle < 90){
        px = px + cos(radian) * distance;
        py = py + sin(radian) * distance;
      }
      if(90 < angle < 180){
        px = px + sin(radian) * distance;
        py = py - cos(radian) * distance;
      }
      if(180 < angle < 270){
        px = px - sin(radian) * distance;
        py = py - cos(radian) * distance;
      }
      if(270 < angle < 360){
        px = px - cos(radian) * distance;
        py = py + sin(radian) * distance;
      }
     if(angle == 0 || angle == 360){
        py = py + distance;
      }
      if(angle == 90){
        px = px + distance;
      }
      if(angle == 180){
        py = py - distance;
      }
      if(angle == 270){
        px = px - distance;
      }
      cout << "MrRoboto is at x=" << px << " and y=" << py << endl;
      cout << '\n';
    }
  }


int main(){
  changePosition();
}
