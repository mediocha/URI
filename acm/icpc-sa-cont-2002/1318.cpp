#include <iostream>
#include <map>


using namespace std;

int main(){

    int N, M, T, soma;                     
    map<int,int> vet_map;                

    do{                                 

        cin >> N >> M;                      // Entrada do numero de bilhetes originais e o numero de pessoas presentes

        for(int i = 0; i < M; i++)
        {
            cin >> T;                       //numero de bilhetes contidos no pacote
            vet_map[T]++;                   //conta a quantidade de bilhetes repetidos
            //vet[T]++;
        }
       
        soma = 0;
        for(auto& x:vet_map){               //percorre o map através da variável x
            if(x.second > 1){               //se tiver mais de um bilhete repetido
                soma++;                     //somará mais um
            }
        }

        if(N!=0 && M!=0)                    //contenção para não imprimir 0 após a finalização do programa
            cout << soma << "\n";
        vet_map.clear();                    //limpa o map
        
    }while(N!=0 && M !=0);                  // enquanto N e M for diferente de 0


    return 0;
}