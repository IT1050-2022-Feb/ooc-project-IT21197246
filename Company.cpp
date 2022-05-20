#include "Company.h"

Company::Company()
{
	noOfVacancy=0
}

Company::Company(const char ID, const char Name, const char Address, const char Email, const char No, int pnoOfVacancy)
{
	noOfVacancy = pnoOfVacancy;
}

void Company::login()
{
}

void Company::addPublishVacancy(Vacancy* cPubishVacancy)
{
}

void Company::displaycomplanyDetails()
{
}

void Company::addCheckApplication()
{
}

Company::~Company()
{
}
