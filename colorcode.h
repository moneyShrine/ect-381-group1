//library created by
//Name: Akpan Aniekan Emmanuel
//Matric number:19/097344011


#include <string>

int getColorCode(const std::string& color) {
    if (color == "black")
        return 0;
    else if (color == "brown")
        return 1;
    else if (color == "red")
        return 2;
    else if (color == "orange")
        return 3;
    else if (color == "yellow")
        return 4;
    else if (color == "green")
        return 5;
    else if (color == "blue")
        return 6;
    else if (color == "violet")
        return 7;
    else if (color == "gray")
        return 8;
    else if (color == "white")
        return 9;

    return -1;  // Invalid color code
}

