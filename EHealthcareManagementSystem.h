#ifndef EHEALTHCAREMANAGEMENTSYSTEM_H
#define EHEALTHCAREMANAGEMENTSYSTEM_H

#include "Patient.h"
#include "Doctor.h"
#include "MedicalHistory.h"
#include <vector>

class EHealthcareManagementSystem {
private:
    std::vector<Patient> patients;
    std::vector<Doctor> doctors;
    std::vector<MedicalHistory> medicalHistories;

public:
    void registerPatient(const Patient& patient);
    void registerDoctor(const Doctor& doctor);
    void recordDiagnosis(const Patient& patient, const std::string& diagnosis);
    void recordTreatments(const Patient& patient, const std::string& treatment);
    void recordMedications(const Patient& patient, const std::string& medication);
    void generateMedicalHistoryReport(const Patient& patient) const;

private:
    int findPatientIndex(const Patient& patient) const;
};

#endif // EHEALTHCAREMANAGEMENTSYSTEM_H
