/*
Nicolas Nuila
Had help from TAs with optimizing the calculations for the x and y components
*/
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
      while(cin.fail()){
      cin.clear();
          cout << "Error, please enter an angle between 0 and 360 and a positive number for distance." << endl;
          cin.ignore(256,'\n');
          cin >> angle >> distance;
      }
      if (angle == -1 && distance == -1)
        break;
      angle = abs(angle);
      distance = abs(distance);
      if(angle == 360)
        angle = 0;
      px += distance * cos(M_PI / 2 - angle * M_PI / 180);
      py += distance * sin(M_PI / 2 - angle * M_PI / 180);
      cout << "MrRoboto is at x=" << px << " and y=" << py << endl;
      cout << '\n';
    }
  }


int main(){
  changePosition();
}
