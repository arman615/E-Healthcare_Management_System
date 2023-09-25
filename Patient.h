#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
private:
    std::string name;
    int dataOfBirth;
    std::string gender;
    std::string contactInfo;
    std::string medicalCondition;

public:
    Patient(const std::string& name, int dataOfBirth, const std::string& gender, const std::string& contactInfo, const std::string& medicalCondition);

    const std::string& getName() const;
    int getDataOfBirth() const;
    const std::string& getGender() const;
    const std::string& getContactInfo() const;
    const std::string& getMedicalCondition() const;
};

#endif // PATIENT_H
