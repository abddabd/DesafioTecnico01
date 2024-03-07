#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int
main ()
{
    string persona;
    string conta = "Akira Suou";
    int nivel, temp, escolha;
    double sp, dintotal, tempovid;
    float hp, tempo;
    
    cout << "Insira o nível atual\n";
    cin >> nivel;
    cout << "Insira o nome da persona equipada\n";
    cin >> persona;
    
  while (1)
	{
	  cout << "\nDigite um dos comandos: 1:Status, 2:Adicionar nivel, 3:Conta do Youtube, 4:Adicionar dados do video\n";
	  cin >> escolha;
	  switch (escolha) {
	      
	   default:
	   cout << "Invalido";
	   break;
	   
	   case 1:
	   hp = (9.99f)*nivel;
	   sp = (4.23)*nivel;
	   cout << setprecision(2) << fixed << "Akira Suou \nNivel: " << nivel << "\nHP: " << hp << "\nSP: " << sp << "\nPersona: " << persona;
	   break;
	   
	   case 2:
	   cout << "\nAdicionar quantos niveis\n";
	   cin >> temp;
	   nivel = nivel + temp;
	   break;
	   
	   case 4:
	   cout << "\nDigite o número de visualizacoes do video";
	   cin >> temp;
	   cout << "\nDigite o tempo medio assistido do video";
	   cin >> tempovid;
	   dintotal = (temp*tempovid*0.21) + dintotal;
	   tempo = tempo+(temp*tempovid);
	   break;
	   
	   case 3:
	   cout << setprecision(2) << fixed << conta  << "\nDinheiro total gerado: "
	   << dintotal << "\nTotal de tempo assistido nos vídeos " << tempo;
	   break;
	  }
	}
	  
  return 0;
}
