//this library is created by Ahamefula Abuchi Robert. 

#include <vector>

namespace ToleranceCalculator {
    // Function to calculate tolerance
    double calculateTolerance(const std::vector<int>& colorCodes, bool isFiveBand) {
        int toleranceCode = isFiveBand ? colorCodes[4] : colorCodes[3];
        double tolerance = 0.0;

        if (toleranceCode == 0)
            tolerance = 0.5;
        else if (toleranceCode == 1)
            tolerance = 1;
        else if (toleranceCode == 2)
            tolerance = 2;
        else if (toleranceCode == 3)
            tolerance = 0.5;
        else if (toleranceCode == 4)
            tolerance = 0.25;
        else if (toleranceCode == 5)
            tolerance = 0.1;
        else if (toleranceCode == 6)
            tolerance = 0.05;
        else if (toleranceCode == 7)
            tolerance = 10;
        else if (toleranceCode == 8)
            tolerance = 5;
        else
            tolerance = -1; // Invalid tolerance code

        return tolerance;
    }
}


