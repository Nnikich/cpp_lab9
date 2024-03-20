include <iostream>
using namespace std;
template <typename T>
T *maxim(T *arr, int N)
{
	static T res[2];
	int ind1 = 0;
	int ind2 = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < arr[ind1])
			ind1 = i;
		if (arr[i] > arr[ind2])
			ind2 = i;
	}
	res[0] = arr[ind1];
	res[1] = arr[ind2];
	return res;
}
int main()
{
	int mas1[] = {4,7,1,8,5,7,0,3,15};
	double mas2[] = {3.7,1.9,5.5,2.2,0.5};
	char mas3[] = {'a','e','z','b','c','f','z'};
	cout << "min max : " << *maxim(mas1, sizeof(mas1) / sizeof(mas1[0])) 
		<< " " << *(maxim(mas1, sizeof(mas1) / sizeof(mas1[0])) + 1) << endl;
	cout << "min max : " << *maxim(mas2, sizeof(mas2) / sizeof(mas2[0])) 
		<< "  " << *(maxim(mas2, sizeof(mas2) / sizeof(mas2[0])) + 1) << endl;
	cout << "min max : " << *maxim(mas3, sizeof(mas3) / sizeof(mas3[0])) 
		<< "  " << *(maxim(mas3, sizeof(mas3) / sizeof(mas3[0])) + 1) << endl;
	return 0;
}
