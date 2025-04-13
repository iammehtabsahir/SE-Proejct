#include "length.h"

double LengthConverter::metersToFeet(double meters) {
    return meters * 3.28084;
}

double LengthConverter::feetToMeters(double feet) {
    return feet / 3.28084;
}

double LengthConverter::kilometersToMiles(double kilometers) {
    return kilometers * 0.621371;
}

double LengthConverter::milesToKilometers(double miles) {
    return miles / 0.621371;
}
