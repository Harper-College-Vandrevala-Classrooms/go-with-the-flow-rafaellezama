#include <iostream>
#include <map>
#include "Flow.h"

int main()
{
    map<int, float> sources_and_sinks;
    sources_and_sinks[0] = 100.0;
    double initial_temperature = 10.0;
    int number_of_sections = 5;
    double K = 0.1;

    HeatFlow h(initial_temperature, number_of_sections, K, sources_and_sinks);
    h.pretty_print();

    h.temp_state();
    h.pretty_print();

    h.temp_state();
    h.pretty_print();

    return 0;
}
