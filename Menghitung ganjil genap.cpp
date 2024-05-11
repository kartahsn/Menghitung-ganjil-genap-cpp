#include <iostream> 

using namespace std; 

int main() //function
{
	int a, b=0, c=0, i; //variable 
	cout << "Nama     : Nama kamu \n================================\n\n"; //credit
	while(true) //looping sampai capek
	{
	    cout << "Masukan Angka [max 535]: "; cin >> a; //tempat user memasukan angka lalu disimpan ke variable a
    	if(a>=535) //eksekusi angka yang melebihi batas max
    	{
	    	cout << "Angka tidak valid/terlalu besar\n\n" << endl; //keterangan tidak valid
    	}
	    else
    	{
	    	for(i=0; i<a; i++) //looping sebanyak a
    		{
		    	if(i%2==0) //eksekusi angka genap dan ganjil
	    		{
	    			b++; //penambahan data
	    		}
		    	else
		    	{
			    	c++; //penambahan data
		    	}
    		}
		    cout << "Jumlah Angka Genap : " << b << "\n"; //menampilakan hasil dari genap
    		cout << "Jumlah Angka Ganjil : " << c << "\n\n"; //menampilkan hasil dari ganjil
    		b=0, c=0; //return / mengembalikan nilai
    	}
	}
}