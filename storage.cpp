#include "storage.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

double StorageConverter::gigabytesToMegabytes(double gigabytes) {
    return gigabytes * 1024.0;
}

double StorageConverter::gigabytesToKilobytes(double gigabytes) {
    return gigabytes * 1024.0 * 1024.0;
}

double StorageConverter::megabytesToGigabytes(double megabytes) {
    return megabytes / 1024.0;
}

double StorageConverter::megabytesToKilobytes(double megabytes) {
    return megabytes * 1024.0;
}

double StorageConverter::kilobytesToGigabytes(double kilobytes) {
    return kilobytes / (1024.0 * 1024.0);
}

double StorageConverter::kilobytesToMegabytes(double kilobytes) {
    return kilobytes / 1024.0;
}

double StorageConverter::bytesToKilobytes(double bytes) {
    return bytes / 1024.0;
}

double StorageConverter::bytesToMegabytes(double bytes) {
    return bytes / (1024.0 * 1024.0);
}

double StorageConverter::bytesToGigabytes(double bytes) {
    return bytes / (1024.0 * 1024.0 * 1024.0);
}

double StorageConverter::kilobytesToBytes(double kilobytes) {
    return kilobytes * 1024.0;
}

double StorageConverter::megabytesToBytes(double megabytes) {
    return megabytes * 1024.0 * 1024.0;
}

double StorageConverter::gigabytesToBytes(double gigabytes) {
    return gigabytes * 1024.0 * 1024.0 * 1024.0;
}

double StorageConverter::convert(double value, const string& fromUnit, const string& toUnit) {
    if (fromUnit == toUnit) {
        return value;
    }

    // Convert to bytes first
    double valueInBytes = value;
    if (fromUnit == "GB") {
        valueInBytes = gigabytesToBytes(value);
    } else if (fromUnit == "MB") {
        valueInBytes = megabytesToBytes(value);
    } else if (fromUnit == "KB") {
        valueInBytes = kilobytesToBytes(value);
    } else if (fromUnit == "B") {
        valueInBytes = value;
    }
     else {
        throw invalid_argument("Invalid fromUnit: " + fromUnit);
    }

    // Convert from bytes to the target unit
    if (toUnit == "GB") {
        return bytesToGigabytes(valueInBytes);
    } else if (toUnit == "MB") {
        return bytesToMegabytes(valueInBytes);
    } else if (toUnit == "KB") {
        return bytesToKilobytes(valueInBytes);
    } else if (toUnit == "B") {
        return valueInBytes;
    }
      else {
        throw invalid_argument("Invalid toUnit: " + toUnit);
    }
}

string StorageConverter::formatStorage(double value, const string& fromUnit, const string& toUnit) {
    double result = convert(value, fromUnit, toUnit);
    stringstream ss;
    ss << fixed << setprecision(2) << value << " " << fromUnit << " is equal to " << result << " " << toUnit;
    return ss.str();
}
