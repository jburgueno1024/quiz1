#include <iostream>
using namespace std;

int main() 
{
  //da max tiem
  int maxTime = 1440;
  
  //excuse me i am in need of medical attention
  int minSleep = 270;
  string convSleep = "" + to_string(minSleep/60) + "hrs " + to_string(minSleep%60) + "min";
  
  int minSchool = 480;
  string convSchool = "" + to_string(minSchool/60) + "hrs " + to_string(minSchool%60) + "min";
  
  int minComm = 150;
  string convComm = "" + to_string(minComm/60) + "hrs " + to_string(minComm%60) + "min";
  
  int minWork = 120;
  string convWork = "" + to_string(minWork/60) + "hrs " + to_string(minWork%60) + "min";
  
  int minFood = 90;
  string convFood = "" + to_string(minFood/60) + "hrs " + to_string(minFood%60) + "min";
  
  int minHobby = 240;
  string convHobby = "" + to_string(minHobby/60) + "hrs " + to_string(minHobby%60) + "min";
  
  
  //AUUUUGGHHH I NEED A MEDIC BAG
  int timeTotal = minSleep+minSchool+minComm+minWork+minFood+minHobby;
  string convTotal = "" + to_string(timeTotal/60) + "hrs " + to_string(timeTotal%60) + "min";
  
  int timeOther = maxTime-timeTotal;
  string convOther = "" + to_string(timeOther/60) + "hrs " + to_string(timeOther%60) + "min";
  
  int timeProd = minSchool + minComm + minWork;
  string convProd = "" + to_string(timeProd/60) + "hrs " + to_string(timeProd%60) + "min";
  
  int timeLeisure = minHobby + minFood;
  string convLeisure = "" + to_string(timeLeisure/60) + "hrs " + to_string(timeLeisure%60) + "min";
  
  double percentProd = (timeProd / 1440.0)*100;
  
    cout << "==TODAY==";
    cout << "\nSleep: " << convSleep;
    cout << "\nClass: " << convSchool;
    cout << "\nCommuting: " << convComm;
    cout << "\nWork: " << minWork;
    cout << "\nFood: " << convFood;
    cout << "\nHobby: " << convHobby;
    
    cout << "\n----";
    cout << "\nTotal Time: " << convTotal;
    cout << "\nProductive Time: " << convProd;
    cout << "\nLeisure Time: " << convLeisure;
    cout << "\nOther Time: " << convOther;
    cout << "\n----";
    cout << "\nProductive Percentage: " << to_string(percentProd);
    return 0;
}