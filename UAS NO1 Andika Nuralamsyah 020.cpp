#include <iostream>
#include <conio.h>
using namespace std;

void garis(){
	cout << "=====================================================" << endl;
}

void biodata(){
	garis();
	cout << "Nama \t: Andika Nuralamsyah" << endl;
	cout << "NIM \t: 1227050020" << endl;
	garis();
}

int main(){
	
	biodata();
		
	int matriks[99][99];
	int matriks_reverse[99][99];
	int row, column, i, j;
	
	cout << "Input jumlah baris matriks: ";
	cin >> row;
	cout << "Input jumlah kolom matriks: ";
	cin >> column;
	cout << endl;
	
	for(i = 0; i < row ; i++){
    for(j = 0; j < column; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matriks[i][j];
    }
    cout << endl;
  }
  
    cout << "Tampilan Matriks: " << endl;
	for(i = 0; i < row ; i++){
    for(j = 0; j < column; j++){
      cout << matriks[i][j] << " ";
    }
    cout << endl;
    }
    
  	for(i = 0; i < row ; i++){
  	for(j = 0; j < column; j++){
    	matriks_reverse [j][i] = matriks [i][j]; 
    }
	cout<<endl;
	}
	
	cout<<"Tampilan Hasil Tukar Matriks\n";
	for(i = 0; i < column ; i++){
    for(j = 0; j < row ; j++){
      cout<< matriks_reverse[i][j] << " ";
 	}
 	cout<<endl;
	}
	
  return 0;
}
