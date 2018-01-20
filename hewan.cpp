#include <iostream>
#include <string>
using namespace std;

class hewan {
	public:
		void makan(string makan);
			string khewan;
			}
;

int main(){
	hewan sapi,s1,harimau,h1,babi,b1;
	
	cout<<"Klasifikasi Hewan Berdasarkan Jenis Makanan : "<<endl<<endl;
	sapi.khewan    ="Sapi adalah hewan Herbivora!";
	s1.khewan      ="karena memiliki banyak gigi geraham yang rapat untuk mengunyah.";
	harimau.khewan ="Sapi adalah hewan Karnivora !";
	h1.khewan      ="karena Memiliki gigi taring dan gigi seri yang tajam.";
	babi.khewan    ="Babi adalah hewan Omnivora!";
	b1.khewan      ="karena bentuk gigi disesuaikan dengan jenis makanannya.";
	
	
	cout<<(sapi.khewan)<<endl;
	cout<<(s1.khewan)<<endl;
	sapi.makan ("Hewan herbivora adalah hewan pemakan tumbuhan. Kelompok hewan ini hanya memakan tumbuhan sebagai bahan makanannya.");
	
	cout<<(harimau.khewan)<<endl;
	cout<<(h1.khewan)<<endl;
	harimau.makan ("Hewan karnivora adalah hewan pemakan daging. Kelompok hewan ini hanya memakan hewan lain sebagai bahan makanannya.");
	
	cout<<(babi.khewan)<<endl;
	cout<<(b1.khewan)<<endl;
	babi.makan ("Hewan omnivora adalah hewan pemakan segala. Kelompok hewan ini memakan hewan lain dan juga tumbuhan sebagai bahan makanannya.");
}
	void hewan :: makan(string makan) {
		cout << "Jenis Makanan : " << makan <<endl<<endl;
		
}
	
