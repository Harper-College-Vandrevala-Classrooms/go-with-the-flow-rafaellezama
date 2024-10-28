#include <vector>
#include <map>
using namespace std;
class HeatFlow
{
private:
  vector<double> temperatures;
  double K;
  map<int, double> sources;

public:
  HeatFlow(double initialTemperature, int number_of_sections, double constantK, const map<int, float> &sources_and_sinks);
  void temp_state();
  void pretty_print();
};