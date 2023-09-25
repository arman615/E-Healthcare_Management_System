#ifndef MEDICALHISTORY_H
#define MEDICALHISTORY_H

#include <vector>
#include <string>

class MedicalHistory {
private:
    std::vector<std::string> diagnoses;
    std::vector<std::string> treatments;
    std::vector<std::string> medications;

public:
    void addDiagnosis(const std::string& diagnosis);
    void addTreatment(const std::string& treatment);
    void addMedication(const std::string& medication);
    void printMedicalHistory() const;
};

#endif // MEDICALHISTORY_H
