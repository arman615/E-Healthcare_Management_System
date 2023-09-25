#include "MedicalHistory.h"
#include <iostream>

void MedicalHistory::addDiagnosis(const std::string& diagnosis) {
    diagnoses.push_back(diagnosis);
}

void MedicalHistory::addTreatment(const std::string& treatment) {
    treatments.push_back(treatment);
}

void MedicalHistory::addMedication(const std::string& medication) {
    medications.push_back(medication);
}

void MedicalHistory::printMedicalHistory() const {
    std::cout << "Medical History: " << std::endl;
    std::cout << "Diagnoses: ";
    for (const auto& diagnosis : diagnoses) {
        std::cout << diagnosis << ", ";
    }
    std::cout << std::endl;

    std::cout << "Treatments: ";
    for (const auto& treatment : treatments) {
        std::cout << treatment << ", ";
    }
    std::cout << std::endl;

    std::cout << "Medications: ";
    for (const auto& medication : medications) {
        std::cout << medication << ", ";
    }
    std::cout << std::endl;
}
