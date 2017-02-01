/*	A la mode
	Robert Ordóñez & CPTR 215
	2017-02-01
*/

#include <iostream>
#include <vector>
using namespace std;

vector<double> getNumbers();	// function prototype (or declaration)
void showNumbers(vector<double> numbers);
vector<double> computeMode(vector<double> numbers);

int main()
{
	// get numbers from user
	vector<double> numbers = getNumbers();

	// compute mode
	vector<double> mode = computeMode(numbers);

	// output mode
	cout << "The mode of ";
	showNumbers(numbers);
	cout << "is ";
	showNumbers(mode);

	return 0;
}

// function definition
vector<double> getNumbers()		// function header (or signature)
{
	// TODO: replace function stub
	return { 3, 5, 2.7, 9, 3, 4, 5, 4, 3, 5 };
}

void showNumbers(vector<double> numbers)
{
	cout << "{ ";
	for (vector<double>::size_type i = 0; i < numbers.size(); i++)
	{
		if (i > 0)
			cout << ", ";
		cout << numbers.at(i);
	}
	cout << " }" << endl;
}

vector<double> computeMode(vector<double> numbers)
{
	// TODO: replace function stub
	return { 3, 5 };
}