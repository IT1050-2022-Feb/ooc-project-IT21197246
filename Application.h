#include "Company.h"
#include "Jobseeker.h"

class Application
{
private:
	char appID[6];
	char appPublisher[50];
	char appDetails[100];

public:
	Application();
	Application(const char nappID[], const char nappPublisher[], const char nappDetails[]);
	void applicationDetais();
	void sortApplication();
	void displayApplicationDetails();
	~Application();

};

