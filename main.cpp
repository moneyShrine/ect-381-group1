#include <iostream>
#include <vector>
#include <string>
#include "resistancecal.h"
#include "tolresistance.h"
#include "inputvalid.h"
#include "errorhandling.h"
#include "colorcode.h"


using namespace std;
using namespace ResistanceCalculator;
using namespace ToleranceCalculator;
using namespace InputValidator;
using namespace ErrorHandler;

int main() {
    char resistorType;
    cout<<"Welcome to the Resistor Color Code Calculator Program Version 1"<<endl;
    cout<<"\nThis program will help you to calculate the resistance and tolerance value of any 4 band or 5 band resistor."<<endl;
    cout<<"\nThe color codes that are available in this program are as follows:\n\nBlack\nBrown\nRed\nOrange\nYellow\nGreen\nBlue\nViolet\nGray\nWhite"<<endl;
    cout<<"\nWARNING: MAKE SURE TO TYPE EACH OF THE COLOR CODES IN LOWERCASE!!!\n"<<endl;
    cout<<"\nFor avoidance of doubt, this is an example of how your input should be:\nEnter resistor type (4 or 5): 4\nEnter color for band 1: red\nEnter color for band 2: black\nEnter color for band 3: orange\nEnter color for band 4: white"<<endl;
    cout<<"\nResistance: 20000 ohms\nTolerance: -1%"<<endl;
	cout << "\nEnter resistor type (4 or 5): ";
    cin >> resistorType;

    bool isFiveBand = (resistorType == '5');

    vector<string> colorInputs;
    for (int i = 0; i < (isFiveBand ? 5 : 4); ++i) {
        string color;
        cout << "Enter color for band " << i + 1 << ": ";
        cin >> color;
        colorInputs.push_back(color);
    }

    vector<int> colorCodes;
    for (int i = 0; i < colorInputs.size(); ++i) {
        int code = getColorCode(colorInputs[i]);
        if (code == -1) {
            handleError("Invalid color: " + colorInputs[i]);
            return 1;
        }
        colorCodes.push_back(code);
    }

    if (!validateInput(colorCodes, isFiveBand)) {
        handleError("Invalid number of color codes");
        return 1;
    }

    double resistance = calculateResistance(colorCodes, isFiveBand);
    double tolerance = calculateTolerance(colorCodes, isFiveBand);

    // Output the results
    cout << "Resistance: " << resistance << " ohms" << endl;
    cout << "Tolerance: " << tolerance << "%" << endl;
    cout<<"\nThank you for using this tiny but breathtaking program :).\nCome back next time for more exciting programs......."<<endl;

    return 0;
}

