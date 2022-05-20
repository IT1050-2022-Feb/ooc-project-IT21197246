#include "Feedback.h"

Feedback::Feedback()
{
	strcpy(feedbackID, "");
	feedbackRating = 0 ;
	strcpy(feedbackPublisher, "");

}

Feedback::Feedback(const char nfeedbackID[], const int nfeedbackRating, const char nfeedbackPublisher[])
{
	strcpy(feedbackID, nfeedbackID);
	feedbackRating = nfeedbackRating;
	strcpy(feedbackPublisher, nfeedbackPublisher);
}

void Feedback::send()
{
}

void Feedback::feedbackDetails()
{
}

void Feedback::displayfeedbackDetails()
{
}

Feedback::~Feedback()
{
}
