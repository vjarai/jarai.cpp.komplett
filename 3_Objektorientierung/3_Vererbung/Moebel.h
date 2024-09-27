#if !defined(MOEBEL_H)
#define MOEBEL_H		

class Moebel // Basisklasse
{
public:
	double get_preis();
	virtual void benutzen() = 0; // Pur virtuelle Funktion => ergibt abstracte Basisklasse!
	// (Methode muß in den Abgeleiteten Klassen definiert werden.)
	// Somit ist keine Instanz von Moebel mehr zu erzeugen,
	// sondern nur von den Unterklassen!
	// wichtig sind (virtual) und (=0) !!!!  
	virtual void montieren() = 0;
	Moebel(const std::string& bezeichnung, double preis);
	virtual ~Moebel();

protected: // protected damit die Unterklassen die Variablen auch verwenden können
	std::string bezeichnung_;
	bool ist_montiert_;
	double preis_;
};

#endif
