#include "Registerduser.h"
#include "Application.h"
#include "vacancy.h"
class Company
{
private:
	int noOfVacancy
	Vacancy* cPubishVacancy[];


public:
	Company();
	Company(const char ID, const char Name, const char Address, const char Email, const char No, int pnoOfVacancy );
	void login();
	void addPublishVacancy(Vacancy*cPubishVacancy);
	void displaycomplanyDetails();
	void addCheckApplication();
	~Company();

};

