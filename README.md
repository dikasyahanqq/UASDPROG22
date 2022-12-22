# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemrograman
<br>Nama		      : Andika Nuralamsyah
<br>NIM		        :	1227050020
<br>Jurusan		    :[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
<p> UASDPROG22 merupakan sebuah repository yang berisikan tugas Ujian Akhir Semester pada mata kuliah Dasar Pemrograman oleh Andika Nuralamsyah dengan NIM 1227050020. Dalam repository ini terdapat dua buah program yang dibuat menggunakan bahasa pemrograman c++.</p>
<p> Program pertama menampilkan matriks yang akan diinputkan jumlah baris dan kolomnya oleh user, kemudian selain itu user juga dapat menginputkan nilai dari setiap kolom dan barisnya. Apabila sudah maka program akan menampilkan matriksnya, selanjutnya matriks akan berubah posisi, dimana yang tadinya kolom menjadi baris, dan baris menjadi kolom.</p>
<p> Program kedua menampilkan matriks yang akan diinputkan jumlah baris dan kolomnya oleh user, kemudian selain itu user menginputkan nilai dari setiap kolom dan barisnya. Apabila sudah maka program akan menampilkan matriksnya dan deretan aritmatika yang hanya menampilkan angka yang tidak dapat habis jika dibagi dengan angka 3,5, dan 7.</p>

## Source Code
Program Pertama :
<code>
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
  </code>

  Program Kedua :
  <code>
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
  </code>
    
## Output
    output program pertama :
    ![Screenshot (153)](https://user-images.githubusercontent.com/118785064/209140804-be5d734a-f8ca-461e-ab3f-c94a1e6d4f06.png)

    output program kedua :
    ![Screenshot (154)](https://user-images.githubusercontent.com/118785064/209141490-cb43e598-ff66-4949-9474-7d9169725797.png)
    
