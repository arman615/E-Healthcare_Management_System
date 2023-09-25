#include "EHealthcareManagementSystem.h"

int main() {
    EHealthcareManagementSystem system;

    Doctor doctor1("Dr.Smith", "Cardiologist", 10, "drsmith@example.com");
    Doctor doctor2("Dr.Johnson", "Dermatologist", 8, "drjohnson@example.com");

    system.registerDoctor(doctor1);
    system.registerDoctor(doctor2);

    Patient patient1("Ann", 1990, "Male", "ann@example.com", "Allergies");
    Patient patient2("Joe", 2000, "Female", "joe@example.com", "Asthma");

    system.registerPatient(patient1);
    system.registerPatient(patient2);

    system.recordDiagnosis(patient1, "High blood pressure");
    system.recordTreatments(patient1, "Prescription medication");
    system.recordMedications(patient1, "Lisinopril");

    system.recordDiagnosis(patient2, "Eczema");
    system.recordTreatments(patient2, "Topical ointment");
    system.recordMedications(patient2, "Hydrocortisone cream");

    system.generateMedicalHistoryReport(patient1);
    system.generateMedicalHistoryReport(patient2);

    return 0;
}
