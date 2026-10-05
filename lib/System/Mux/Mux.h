// CD74HC4067
// C0-C7 = Moisture
// C8-C15 = Temperature

#include <array>
#include <cmath>
#include <sys/types.h>

template <size_t ChannelCount> struct Mux {
  std::array<int, std::log2(ChannelCount)> selectPins;
};