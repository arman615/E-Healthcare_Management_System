#include "Patient.h"

Patient::Patient(const std::string& name, int dataOfBirth, const std::string& gender, const std::string& contactInfo, const std::string& medicalCondition)
    : name(name), dataOfBirth(dataOfBirth), gender(gender), contactInfo(contactInfo), medicalCondition(medicalCondition) {}

const std::string& Patient::getName() const {
    return name;
}

int Patient::getDataOfBirth() const {
    return dataOfBirth;
}

const std::string& Patient::getGender() const {
    return gender;
}

const std::string& Patient::getContactInfo() const {
    return contactInfo;
}

const std::string& Patient::getMedicalCondition() const {
    return medicalCondition;
}
