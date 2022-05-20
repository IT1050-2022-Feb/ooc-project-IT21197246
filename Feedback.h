#include "Company.h"
#include "Jobseeker.h"

class Feedback
{

	
	private:
		char feedbackID[6];
		int feedbackRating;
		char feedbackPublisher[20];

	public:
		Feedback();
		Feedback(const char nfeedbackID[], const int nfeedbackRating, const char nfeedbackPublisher[]);
		void send();
		void feedbackDetails();
		void displayfeedbackDetails();
		~Feedback();

	
};

