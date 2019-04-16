#ifndef ARETE_H
#define ARETE_H
#include <iostream>
#include "sommet.h"
#include <string>
#include <fstream>
#include "graphique.h"

class Arete : public Graphique
{
public:
  Arete() : m_nom(""), m_depart(NULL), m_arriver(NULL), m_poids1(0), m_poids2(0), m_poids3(0){};
  Arete(std::string lenom, Sommet *depart, Sommet *arriver, float lepoids1, float lepoids2, float lepoids3 = 0);
  Arete(Arete const &copie);
  std::string getnom() const { return m_nom; };
  Sommet getdepart() const { return *m_depart; };
  Sommet getarriver() const { return *m_arriver; };
  float getpoids1() const { return m_poids1; };
  float getpoids2() const { return m_poids2; };
  ~Arete();
  void afficherData() const;
  void dessiner(Svgfile &svg);
  void writeData(std::ofstream &outData);

private:
  std::string m_nom;
  Sommet *m_depart;
  Sommet *m_arriver;
  float m_poids1;
  float m_poids2;
  float m_poids3;
};

#endif
