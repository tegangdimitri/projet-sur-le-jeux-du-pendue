#include <iostream>
using namespace std;
void afficherPendu(int mauvaisesReponses);
int verification( char entre, char *tab ,const char *ver);
void affichage( char *g);
int main(){
    const char *adeviner = "PROGRAMMATION" ;
    char entre ='-';
    char proposition[16];
    int indice , erreur= 0 ;
    int victoire=0,A=0;
    std ::cout  << "Bienvenue au jeux du pendu !!!\nentrer une lettre\n \n";
    for ( int i = 0; i< 16 ; i++){
        proposition[i] = '-' ;
    }
        for( int i = 0 ; i<=12 ; i++){
            std :: cout << " "<< proposition[i];
        }
    
    while(erreur !=6 || victoire!= 7){
                cout << "\n";
                cin >>  entre;
            
                
                switch (entre) {
                    case 'A':
                       // indice=verification ( entre,proposition , adeviner);
                        proposition[2]='O';
                        proposition[3]='G';
                        proposition[4]='R' ;
                        proposition[5]='A' ;
                        proposition[6]='M' ;
                        proposition[7]='M';
                        proposition[8]='A' ;
                        proposition[11]= 'O';
                        
                            A++;
                            
                    
                    default :
                        indice=verification ( entre,proposition , adeviner); 
                        if (indice >= 13 || A>=2)   {
                            erreur++ ;
                            afficherPendu(erreur);
                        }else{
                            proposition[indice]= adeviner [indice];
                            victoire ++ ;
                            affichage( proposition);
                            
                        }
                }  
                if (victoire == 6){
                    cout << "\nfelicitation !!!";
                } 
                if (erreur == 4){
                    cout << "\nVous avez perdu la parie !!!";
                }     
    }
            
                
}
void affichage( char *g){
for (int i = 0 ; i<= 12 ;i++){
    cout << " "<< g[i];
}
}
int verification( char entre, char *tab ,const char *ver){
    int i = 0 ;
    while (ver[i]!='\0'){
         if(ver[i] == entre) {
          break  ;
        }
        i++;
    }
    return i ;
}
void afficherPendu(int mauvaisesReponses) {
    cout << endl;
    switch(mauvaisesReponses) {
    case 4:
        cout << R"(
                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|\
                                                    |   / \
                                                    |
                                                  __|__
                )" << endl;
        break;

    case 3:
        cout << R"(
                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   
                                                    |   
                                                    |
                                                  __|__
                )" << endl;
        break;
        
     case 2:
        cout << R"(
                                                    ______
                                                    |
                                                    |
                                                    |
                                                    |
                                                    |
                                                  __|__
                )" << endl;
        break;
    case 1:
        cout << R"(






                                                  _____
                )" << endl;
        break;
    default:
        cout << endl;
        break;
    }
    cout << endl;
}
