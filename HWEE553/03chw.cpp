#include <iostream>
using namespace std;

class MrRoboto{
private:
  double px, py;  //position x and position y

public:
  friend double changePosition(){
    double angle = 0;
    double distance = 0;
    cout << "Please enter the direction you would like MrRoboto to move (in degrees, north = 0, East = 90) and a the distance in that direction." << endl;
    cin >> angle >> distance;
    
  }
  double getPosition(){

  }
};

int main(){

}
