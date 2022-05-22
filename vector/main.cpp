#include"Vector.h"
#include"Matrix.h"
#include<iostream>

int main(void)
{
	TMatrix <int> A(3, 5, -3);
	TMatrix <int> B(3, 5, 6);
	std::cout << A + B << std::endl;
	std::cout << A - B << std::endl;

	return 0;
	
	/*TVector<double> A(5);
	std::cin >> A;
	std::cout << std::endl;
	TVector<double> B(5);
	std::cin >> B;
	std::cout << "A = " << A << std::endl;
	std::cout << "B = " << B << std::endl;
	std::cout << "A ?== B - " << (A == B) << std::endl;*/

	/*TVector<char> A(5);
	std::cin >> A;
	TVector<char> B(A);
	std::cout << "A = " << A << std::endl;
	std::cout << "B = " << B << std::endl;*/

	/*TVector<double> A(5);
	std::cin >> A;
	std::cout << std::endl;
	for (int q = 0; q < A.GetLength(); q++)
		std::cout << A[q] << " ";*/

	/*TVector<int> A(5);
	std::cout << A.GetLength() << std::endl;
	A.ReSize(3);
	std::cout << A.GetLength() << std::endl;
	return 0;*/

	/*TVector<double> A(5);
	std::cin >> A;
	std::cout << std::endl;
	TVector<double> B(5);
	std::cin >> B;
	std::cout << "A = " << A << std::endl;
	std::cout << "B = " << B << std::endl;
	std::cout << "A + B = " << A + B << std::endl;
	std::cout << "A - B = " << A - B << std::endl;
	std::cout << "A * B = " << A * B << std::endl;
	std::cout << "A / B = " << A / B << std::endl;*/

	/*TVector<int> A(5);
	std::cin >> A;
	std::cout << A;
	return 0;*/


}