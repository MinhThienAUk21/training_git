// Nhap vao 2 so nguyen a, b. Tim UCLN va BCNN dung ham long ham
#include<iostream>
using namespace std;
// =======KHAI BAO NGUYEN MAU HAM=======
int UCLN(int, int);
int BCNN(int, int);
// Tim uoc chung lon nhat giua 2 so a va b

 
int main()
{
	
	int a, b;
	cout<<"\nNhap vao hai so nguyen:\n";
	cout<<"\nNhap vao a: ";
	cin >> a;
	cout<<"\nNhap vao b: ";
	cin >> b;
	cout<<"\nUoc chung lon nhat cua a va b la: "<<UCLN(a,b);
	cout<<"\nBoi chung nho nhat cua a va b la: "<<BCNN(a,b);
	
	system("pause");
	return 0;
}
