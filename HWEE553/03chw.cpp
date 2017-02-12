#include <iostream>
#include <cmath>
using namespace std;

  double px = 0;
  double py = 0;  //position x and position y

  void changePosition(){
    double angle = 0;
    double distance = 0;
    while (angle != -1 && distance != -1){
      cout << "Please enter the direction you would like MrRoboto to move (in degrees, north = 0, East = 90) and the distance in that direction." << endl;
      cout << "Enter -1 and -1 to exit." << endl;
      cin >> angle >> distance;
      while(cin.fail() || -360 > angle > 360 ){
      cin.clear();
          cout << "Error, please enter an angle between 0 and 360 and a positive distance." << endl;
          cin.ignore(256,'\n');
          cin >> angle >> distance;
      }
      angle = pow(angle,2);
      angle = sqrt(angle);
      distance = pow(distance,2);
      distance = sqrt(distance);
      angle = angle - 90;
      if (90 < angle < 270)
        angle *= -1;
      angle *= M_PI / 180;
      px = px + cos(angle) * distance;
      py = py + sin(angle) * distance;
      cout << "MrRoboto is at x=" << px << " and y=" << py << endl;
      cout << '\n';
    }
  }


int main(){
  changePosition();
}
