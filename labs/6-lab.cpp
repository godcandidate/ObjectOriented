#include<iostream>

using namespace std;

int largestnum(int numbers[], int n)
{
	int nmax = numbers[0];
	for(int i=1; i<n; i++)
	{
		if (numbers[i] > nmax)
			nmax = numbers[i];
	}
	return nmax;

}

int smallestnum(int numbers[], int n)
{
	int nmin = numbers[0];
	for(int i=1; i<n; i++)
	{
		if (numbers[i] < nmin)
			nmin = numbers[i];
	}
	return nmin;
}

void largeSmall(int &nmin, int &nmax, int numbers[], int n)
{
    //min
    nmin = numbers[0];
	for(int i=1; i<n; i++)
	{
		if (numbers[i] < nmin)
			nmin = numbers[i];
	}

	//max
	nmax = numbers[0];
	for(int i=1; i<5; i++)
	{
		if (numbers[i] > nmax)
			nmax = numbers[i];
	}

}

int main()
{
	int n, key;
	int maximum, minimum;
	cout << "\t\t Array max and min checker\n";
	cout << "\t_______________________________________________________________\n";
	cout << "\n\t\t Enter number of elements: ";
	cin >> n;
	cout << "\n\t\t Enter the elements with space: ";

	// accepting the elements of an array
	int *num = new int(n);
	for(int i=0; i<n; i++)
		cin >> num[i];

	//printing the array
	cout << "\n\t\t Array: ";
	for (int i=0; i<n; i++)
		cout << " "<< num[i];

	cout << "\n\t\t Enter your option\n";
	cout << "\n\t\t\t 1. Check largest element\n";
	cout << "\n\t\t\t 2. Check smallest element\n";
	cout << "\n\t\t\t 3. Check both smallest and largest element\n";

	cout << "\n\t\t\t Enter your option:   ";
	cin >> key;

	cout << "\n\t----------------------------------";
	switch(key)
	{
		case 1:
		    maximum = largestnum(num, n);
			cout << "\n\t\t  Largest element is " << maximum  << endl;
			break;
		case 2:
		    minimum = smallestnum(num, n);
		    cout << "\n\t\t  Smallest element is " << minimum  << endl;
		    break;
		case 3:
		    largeSmall(minimum, maximum, num, n);
		    cout << "\n\t\t  Largest element is " << maximum  << endl;
            cout << "\n\t\t  Smallest element is " << minimum  << endl;
			break;
	}

	return 0;
}

