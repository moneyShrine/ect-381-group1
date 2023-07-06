

#include <vector>

namespace InputValidator {
    // Function to validate input
    bool validateInput(const std::vector<int>& colorCodes, bool isFiveBand) {
        int expectedSize = isFiveBand ? 5 : 4;
        if (colorCodes.size() != expectedSize)
            return false;

        return true;
    }
}


