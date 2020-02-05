#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout << "Enter the number of your subject : ";
	cin >> n;
	float credit[n], grade[n], weight[n], totalw = 0, totalc = 0;
	for (int i=0; i<n; i++) {
		cout << "Enter the Credit of subject " << i+1 << ": ";
		cin >> credit[i];
		cout << "Enter the grade of subject " << i+1 << ":  ";
		cin >> grade[i];
		weight[i] = credit[i]*grade[i];
	}
	for (int i=0; i<n; i++) {
		totalw += weight[i];
		totalc += credit[i];
	}
	float cgpa = totalw/totalc;
	printf ("\nYour total credit is: %0.2f\n", totalc);
	printf ("Your CGPA is: %0.4f\n", cgpa);
	getchar();

	return 0;
}
