#ifndef STORAGE_H
#define STORAGE_H

#include <string>
#include <iostream>
#include <iomanip>

class StorageConverter {
public:
    double gigabytesToMegabytes(double gigabytes);
    double gigabytesToKilobytes(double gigabytes);
    double megabytesToGigabytes(double megabytes);
    double megabytesToKilobytes(double megabytes);
    double kilobytesToGigabytes(double kilobytes);
    double kilobytesToMegabytes(double kilobytes);
    double bytesToKilobytes(double bytes);
    double bytesToMegabytes(double bytes);
    double bytesToGigabytes(double bytes);
    double kilobytesToBytes(double kilobytes);
    double megabytesToBytes(double megabytes);
    double gigabytesToBytes(double gigabytes);

    std::string formatStorage(double value, const std::string& fromUnit, const std::string& toUnit);

private:
    double convert(double value, const std::string& fromUnit, const std::string& toUnit);
};

#endif // STORAGE_H
