 #include <iostream>
#include <string>
using namespace std;

class tv{
	public:
		void led(string led);
		string suara, grafik, ukuran;	
};

int main (){
	tv lg, sharp, samsung;
	
	lg.suara = "Suara lumayan bagus ";
	sharp.suara = "Suara standar ";
	samsung.suara = "Suara sangat bagus ";
	
	lg.grafik = "Grafik Bagus ";
	sharp.grafik = "Grafik standar ";
	samsung.grafik = "Sangat bagus ";
	
	lg.ukuran = "Ukuran 40 inch - 49 inch ";
	sharp.ukuran = "Ukuran 40 inch - 59 inch ";
	samsung.ukuran = "Ukuran 360 inch - larger ";
	
	cout<<"tv lg "<< (lg.suara) << (lg.grafik) << (lg.ukuran);
	lg.led("Tv yang lumayan bagus ");
	cout<<"tv sharp "<< (sharp.suara) << (sharp.grafik) << (sharp.ukuran);
	sharp.led("Tv kualitas standar ");
	cout<<"tv samsung "<< (samsung.suara) << (samsung.grafik) << (samsung.ukuran);
	samsung.led("tv yang sangat-sangat bagus "); 
		
}
