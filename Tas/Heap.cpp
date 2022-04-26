#include<iostream>
#include<vector>
#include<string>

using namespace std;

//using std :: vector;
//using std :: cout;

class Tas_Max{ 
	private :
//		int Size;
		vector<int> Tas;
		
		int getParent(int i);
		int getLC(int i);
		int getRC(int i);
		
	public :
		bool isEmpty();
		
		void insererElem(int Elem);
		void shiftUp(int i); // Pour l'ajout
		
		void supprimerElem();
		void shiftDown(int i); // Pour la suppression
		
		void afficher();
	
	
		
};

int Tas_Max :: getParent(int i){
	if(i==0) return -1;
	
	return (i-1)/2 ;
}

int Tas_Max :: getLC(int i){
	if(2*i+1 > Tas.size()-1 )  return -1;
	return 2*i+1;
}

int Tas_Max :: getRC(int i){
	if(2*i+2 > Tas.size()-1 )  return -1;
	return 2*i+2;
}

bool Tas_Max ::  isEmpty(){
	return Tas.size() == 0;
}

void TasMax :: shiftUp(int i){
	if(i==0) return;
	
	if( Tas[i] > Tas[ getParent(i)]){
			swap( Tas[i] , Tas[ getParent(i )] );
			shiftUp( getParent(i) );		
	}		
}


void Tas_Max :: insererElem(int Elem){
	Tas.push_back(Elem);
	
	shiftUp(Tas.size()-1);
}

void Tas_Max :: shiftDown(int i){
    if( i >= Tas.size()-1 ) return;
    
    if( getLC(i) == -1) return;
    cout << "\n"<<getLC(i) ;
	if(Tas[i] < Tas[getLC(i)]){
    
		if( Tas[getLC(i)] > Tas[getRC(i)]){
    		swap(Tas[i], Tas[getLC(i)]);
    		shiftDown( getLC(i) );
		}
		else {
			swap( Tas[i], Tas[getRC(i)] );
			shiftDown( getRC(i) );
		} 	

	}
	else return;
	
	
}

void Tas_Max :: supprimerElem(){
	if(isEmpty()) return;
	
	swap(Tas[0], Tas[Tas.size()-1]);
	Tas.pop_back();
	
	shiftDown(0);
}

void Tas_Max ::  afficher(){
	for(int i=0; i< Tas.size(); i++)
		cout << Tas[i] << " " ;
}

//0   1   2   3    4     5     6
//-1  100 75  95   60    65   90
//
//			100
//		75        	95
//	60        65        90



int main(){
	Tas_Max T;
	
	T.insererElem(100);
	T.insererElem(75);
	T.insererElem(95);
	T.insererElem(60);
	T.insererElem(65);
	T.insererElem(90);
	
	T.afficher();
	cout << "\n";
	
	T.insererElem(98);
	T.afficher();
	
		cout << "\n";
	T.insererElem(200);
	T.afficher();
	
	cout << "\n";
	T.insererElem(2);
	T.afficher();
	
	cout << "\n";
	T.insererElem(150);
	T.afficher();
	
	cout << "\n";
	T.supprimerElem();
	T.afficher();
	
	return 0;
}
