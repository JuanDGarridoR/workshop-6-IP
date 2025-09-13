#include <iostream>

using namespace std;

void firstPoint();
void message(int, int, int, char[],  char[], char[], int[]);
int searchVector(int, char[], char);
void secondPoint();
void fillNumbers(int[], int);
int checkNumbers(int, int[], int, int);
int replaceNumbers(int[], int, int[], int, int, int);

int main(){

    int option=-1;

    do{
        cout<<"=====Taller #6 - IP====="<<endl;
        cout<<"1. Punto uno."<<endl;
        cout<<"2. Punto dos."<<endl;
        cout<<"0. Salir."<<endl;
        cout<<"\nDigite la opcion a la que desea ingresar: ";
        cin>>option;
        cout<<"========================"<<endl;

        switch (option){
        case 1:
            firstPoint();
            break;
        
        case 2:
            secondPoint();
            break;
        
        case 0:
            cout<<"Saliendo del programa."<<endl;
            break;

        default:
            cout<<"Digite una opcion valida."<<endl;
        }

    }while(option!=0);

    return 0;
}

void firstPoint(){

    int alphabetSize=27, messageLettersSize=15, hintsSize=37;
    char alphabet[alphabetSize]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char messageLetters[messageLettersSize]={'V','e','r','o','g','n','a','b',' ','P','B','s','d','i','l'};
    char hints[hintsSize] ={'j','i','n','b','j','c','b','f','h','e','d','g','i','c','f','e','f','e','c','c','i','l','c','f','f','d','e','l','n','g','i','d','l','i','g','j','b'};
    int direction[37] = {1,0,1,0,0,0,1,1,0,1,1,1,0,1,0,1,0,1,1,1,0,1,0,0,1,0,1,0,1,0,0,1,1,0,1,0,0};	
   
    message(alphabetSize, messageLettersSize, hintsSize, alphabet, messageLetters, hints, direction);
}

void message(int alphabetSize, int messageLettersSize, int hintsSize, char alphabet[],  char messageLetters[], char hints[], int direction[]){
	
	int move=0, position=0;
	
    cout<<"\n";
	for(int i=0; i<hintsSize; i++){
		
	    move=searchVector(messageLettersSize, alphabet, hints[i]);
	
	    if(direction[i]==1){
		
	        position=position+move;
	    }else{
		
		    position=position-move;
	    }	
	
        cout<<messageLetters[position];
	}
    cout<<endl;
}

int searchVector(int messageLettersSize, char alphabet[], char hints){
	
	bool validate=false;
	int i=0, position=0;
	
	while(validate==false && i<messageLettersSize){
		if(alphabet[i]==hints){
			
			validate=true;
			position=i;
		}
	    i++;
	}
	return position;
}

void secondPoint(){
    
    const int SIZE=100;
    int numbers[SIZE], n=0, m=2;

    do {
        fillNumbers(numbers, SIZE);
        m=2;
        n=0;

        cout<<"\nDigite un numero para verificar o 0 para salir: ";
        cin>>n;

        if (n!=0) {
            checkNumbers(n, numbers, m, n);
        }

    } while (n != 0);
}

void fillNumbers(int numbers[], int size) {
    for(int i=0; i<size; i++) {
        
        numbers[i]=i+1;
    }
}

int checkNumbers(int n, int numbers[], int m, int input) {

    int counter = 0, temp[100];

    for (int i = 0; i < n; i++) {
        
        if ( (i + 1) % m != 0 ) {
            temp[counter] = numbers[i];
            counter++;
        }
    }

    if (counter > m) {
        
        for (int i = 0; i < counter; i++) {
            
            numbers[i] = temp[i];
        }

        return checkNumbers(counter, numbers, m + 1, input);

    } else {

        if (input != 0) {
            
            cout << input << ": ";
            
            for (int i = counter - 1; i >= 0; i--) {
                
                cout << temp[i] << " ";
            }
            cout << endl;
        }
    }
}

int replaceNumbers(int temp[], int count, int numbers[], int n, int m, int input) {
    
    n = count;
    
    for (int i = 0; i < count; i++) {
        numbers[i] = temp[i];
    }
    
    m++;
    
    return checkNumbers(n, numbers, m, input);
}
