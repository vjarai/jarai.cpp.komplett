#include <windows.h>
#include "Alexa.h"
#include "DatumSkill.h"
#include "LichtSkill.h"
#include "UhrzeitSkill.h"
#include "WetterSkill.h"

using namespace std;



int main()
{
	// SetConsoleOutputCP(1252);    
	
	Alexa alexa;

	alexa.addSkill(make_unique< WetterSkill>());
	alexa.addSkill(make_unique < UhrzeitSkill>());
	alexa.addSkill(make_unique < DatumSkill>());
	alexa.addSkill(make_unique < LichtSkill>());

	while (true) {

		string request;
		cout << "Was kann ich fuer Sie tun? (exit zum Beenden)" << endl;

		cin >> request;
		if (request == "exit") break;

		alexa.handleRequest(request);
	}

}
