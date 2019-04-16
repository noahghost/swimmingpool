#include "graphe.h"
#include <random>
#include "time.h"
#define orienter false
using namespace std;

int main()
{
	srand(time(NULL));
	Graphe espace("info1.txt", "info1_weights.txt", orienter, true);
	Graphe arbre = espace.dijkstraSPT("A");

	espace.dessinerGraphe();
	espace.afficherData();

	//excel
	espace.manipulationData();

	return 0;
}
