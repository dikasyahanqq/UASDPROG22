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
  
  cout << "Hasil matriks: " << endl;
  for(i = 0; i < row ; i++){
    for(j = 0; j < column; j++){
      cout << matriks[i][j] << " ";
    }
    cout << endl;
    }
    cout<<endl;
    cout<<"Hasil Akhir\n";
    for (int i = 0; i <row;i++){
    	for (int j = 0; j < column; j++ ){
    		if (matriks[i][j] % 3 != 0 && matriks[i][j] % 5 !=0  && matriks[i][j] %7 !=0){
    			cout<<matriks[i][j]<<" ";
			}
			else {
			}
		}
	}
	
  return 0;
}
