#include "arete.h"

using namespace std;

Arete::Arete() : m_nom(0), m_depart(NULL), m_arriver(NULL)
{
    for (auto &i : m_poids)
    {
        i = 0;
    }
}

Arete::Arete(int lenom, Sommet *depart, Sommet *arriver, float lepoids1, float lepoids2, float lepoids3) : m_nom(lenom), m_depart(depart), m_arriver(arriver)
{
    m_poids[0]=lepoids1;
    m_poids[1]=lepoids2;
    m_poids[2]=lepoids3;
}

void Arete::afficherData() const
{
    cout << "Je suis " << m_nom << " : De " << m_depart->getId() << " a " << m_arriver->getId() << " en ( " << m_poids[0]<< " , " << m_poids[1] << " )" << endl;
}

Arete::Arete(Arete const &copie) : m_nom(copie.m_nom), m_depart(copie.m_depart), m_arriver(copie.m_arriver)
{
    /// On a 3 parametre donc on inscrit une valeur fini dans le code source
    for(unsigned int i=0;i<4;i++)
    {
        m_poids[i]=copie.m_poids[i];
    }
}

Arete::~Arete()
{
    m_depart = NULL;
    m_arriver = NULL;
}

void Arete::dessiner(Svgfile &svg)
{
    svg.addLine(m_depart->getcoordx(), m_depart->getcoordy(), m_arriver->getcoordx(), m_arriver->getcoordy(), "red");
}