#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
private:
    std::string name;
    std::string specialization;
    int yearOfExperience;
    std::string contactInfo;

public:
    Doctor(const std::string& name, const std::string& specialization, int yearOfExperience, const std::string& contactInfo);

    const std::string& getName() const;
    const std::string& getSpecialization() const;
    int getYearOfExperience() const;
    const std::string& getContactInfo() const;
};

#endif // DOCTOR_H
