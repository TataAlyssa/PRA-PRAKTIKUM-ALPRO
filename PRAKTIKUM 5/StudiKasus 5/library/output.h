using namespace std;

class Output
{
public:
	void cetak(){
    cout << endl;
    cout << " Nama Mahasiswa = " << nama << endl;
    cout << " NIM Mahasiswa = " << nim << endl;
    cout << " Daftar Matakuliah = "<< matkul << endl;
    cout << " Total Biaya SKS = " << t_sks << endl;
    cout << " Total Pembayaran = "<< t_pembayaran <<endl;
  }
	void getData(){
    ambil_data.open("apidata.txt");
    
  }
  private :
	ifstream ambil_data;
  	int nama, nim, matkul;
  	int t_sks, t_pembayaran;
};
