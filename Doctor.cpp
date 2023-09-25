#include "Doctor.h"

Doctor::Doctor(const std::string& name, const std::string& specialization, int yearOfExperience, const std::string& contactInfo)
    : name(name), specialization(specialization), yearOfExperience(yearOfExperience), contactInfo(contactInfo) {}

const std::string& Doctor::getName() const {
    return name;
}

const std::string& Doctor::getSpecialization() const {
    return specialization;
}

int Doctor::getYearOfExperience() const {
    return yearOfExperience;
}

const std::string& Doctor::getContactInfo() const {
    return contactInfo;
}
