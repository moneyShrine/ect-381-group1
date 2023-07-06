#include <vector>
#include <cmath>

namespace ResistanceCalculator {
    // Function to calculate resistance
    double calculateResistance(const std::vector<int>& colorCodes, bool isFiveBand) {
        int firstDigit = colorCodes[0];
        int secondDigit = colorCodes[1];
        int multiplier = colorCodes[2];

        int resistance = (firstDigit * 10 + secondDigit) * pow(10, multiplier);

        return resistance;
    }
}


