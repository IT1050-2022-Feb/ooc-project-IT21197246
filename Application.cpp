#include "Application.h"
#include <cstring>


Application::Application()
{
	strcpy(appID, "");
	strcpy(appPublisher, "");
	strcpy(appDetail, "");
}

Application::Application(const char nappID[], const char nappPublisher[], const char nappDetails[])
{
	strcpy(appID, nappID);
	strcpy(appPublisher, nappPublisher);
	strcpy(appDetail, nappDetail);

}

void Application::applicationDetais()
{
}

void Application::sortApplication()
{
}

void Application::displayApplicationDetails()
{
}

Application::~Application()
{
}
