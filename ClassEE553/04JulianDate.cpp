class JulianDate{

}

int main(){
  JulianDate d1(2017, 2, 13, 20, 00, 00);
  JulianDate d2(2017, 2, 19); //00:00:00 default to midnight of that day
  JulianDate d3 = d2 + 3; //what is it 3 days later
  double days = d3 - d1;
}
