#include "Flow.h"

HeatFlow::HeatFlow(double initialTemperature, int number_of_sections, double constantK, const map<int, float> &sources_and_sinks) : K(constantK), temperatures(number_of_sections, initialTemperature)
{
  for (const auto &source : sources_and_sinks)
  {
    int pos = source.first;
    double value = source.second;
    if (pos >= 0 && pos < number_of_sections)
    {
      temperatures[pos] += value;
    }
  }
}

void HeatFlow::temp_state()
{
  vector<double> newTemp = temperatures;
  for (size_t i = 1; i < temperatures.size() - 1; ++i)
  {
    newTemp[i] = temperatures[i] + K * (temperatures[i - 1] - 2 * temperatures[i] + temperatures[i + 1]);
  }
  temperatures = newTemp;
}

void HeatFlow::pretty_print()
{
}
