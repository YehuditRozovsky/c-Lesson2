#include <iostream>
#include <string>
using namespace std;
const int size_arr = 5;
void F3(int, float, char);
void F8(string,string);
void F17(int [],int);
void F22(string, int);
int main()
{
	//3.
    cout << "Hello World!\n";
	int m = 300;
	float fx = 300.60;
	char cht = 'z';
	F3(m, fx, cht);
	//8.
	string st = "acbd";
	F8(st,"");
	//17.
	int arr[size_arr] = { 8,9,2,1,4 };
	F17(arr, size_arr);
	//22.
	string str = "abc";
	F22(str, str.size);
}
void F3(int m, float fx, char cht) {
	cout<<"\n\n Pointer : Demonstrate the use of & and * operator :\n";
	cout<<"--------------------------------------------------------\n";
	int *pt1;
	float *pt2;
	char *pt3;
	pt1 = &m;
	pt2 = &fx;
	pt3 = &cht;
	cout << "m ="<< m<<"\n";
	cout << "fx =" << fx << "\n";
	cout << "cht = " << cht << "\n";
	cout << "\n Using & operator :\n";
	cout << "-----------------------\n";
	cout << " address of m = "<<&m << "\n";
	cout << " address of fx = " << &fx << "\n";
	cout << " address of cht = "<<&cht << "\n";
	cout << "\n Using & and * operator :\n";
	cout << "-----------------------------\n";
	cout << " value at address of m = " << *(&m) << "\n";
	cout << " value at address of fx = " << *(&fx) << "\n";
	cout << " value at address of cht = " << *(&cht) << "\n";
	cout << "\n Using only pointer variable :\n";
	cout << "----------------------------------\n";
	cout << " address of m = "<<pt1<<"\n";
	cout << " address of fx = " << pt2 << "\n";
	cout << " address of cht = " << pt3 << "\n";
	cout << "\n Using only pointer operator :\n";
	cout << "----------------------------------\n";
	cout << " value at address of m = " << *pt1 << "\n";
	cout << " value at address of fx= " << *pt2 << "\n";
	cout << " value at address of cht= " << *pt3 << "\n";
}
void F8(std::string st,std::string result) {
	if (st.length() == 0)
	{
		cout << result << "  ";
		return;
	}
	for (int i = 0; i < st.length(); i++)
	{
		char ch = st[i];
		string left = st.substr(0, i);
		string right = st.substr(i + 1);
		string rest = left + right;
		F8(rest, result + ch);
	}
}
void F17(int arr[],int n) {
	cout << "the elements in the arr:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	cout << "the elements in the arr in reserve:\n";
	for (int i = n-1; i >=0; i--)
	{
		cout << arr[i];
	}
}
void F22(std::string str, int size) {
	string res = "";
	for (int i = size-1; i >=0; i--)
	{
		res += str.substr(i);
	}
	cout << "the string after reverse: " << res;
}

