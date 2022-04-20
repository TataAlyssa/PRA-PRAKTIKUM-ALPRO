#include<iostream>
#include<conio.h>
using namespace std;
class perulangan{
	public:
		perulangan(){n=4;}
		void ulang_for(int);
		void ulang_rekursif(int);
		
	private:
		int n;
};
void perulangan::ulang_for(int n){
	for(int i=1; i<=n;i++)
		cout<<i<<" ";
}
void perulangan::ulang_rekursif(int n){
	int i=4;
	while(i>=n){
		cout<<i<<" ";
		i--;n;
	}
	 getch();
}
int main(){
	perulangan x;
	cout<<"menggunakan cara iterarif"<<endl;
	x.ulang_for(4);
	cout<<endl;
	cout<<"menggunakan rekursif"<<endl;
	x.ulang_rekursif(4);
	 getch();
}

