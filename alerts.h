#include <iostream>
#include <vector>

using namespace std;

class IAlerter
{
  public:
  bool emailSent;
  bool ledGlows;
  
  IAlerter():emailSent(false), ledGlows(false)
  {}
  
};

class EmailAlert : public IAlerter
{
  public:
};

class LEDAlert : public IAlerter
{
  public:
};

class StatsAlerter
{
  private:
  const float max_threshold;
  vector<IAlerter*> iAlerterObj;
  
  public:
  StatsAlerter(float max_val, vector<IAlerter*>ialert_obj): max_threshold(max_val), iAlerterObj(ialert_obj)
  {}
  
  void checkAndAlert(vector<double> v)
  {
    for (double num:v)
    {
      if(num > max_threshold)
      {
        iAlerterObj[0]->emailSent = true;
        iAlerterObj[1]->ledGlows = true;
        break;
      }
    }
  }
};
