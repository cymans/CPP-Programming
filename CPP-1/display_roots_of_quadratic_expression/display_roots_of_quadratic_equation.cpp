# include <iostream>
# include <cmath>

using namespace std;

int main()
{	
	// User input for coefficients a, b, and c.
	int a, b, c;		
	cout << " Enter a, b, c:  ";	
	cin >> a >> b >> c;

	// To calculate the expression (discriminant).
	double discriminant;		
	discriminant = pow(b, 2) - (4 * a * c);		

	// To calculate the formula.
	double x1root, x2root;		
	x1root = (-b + sqrt(discriminant)) / (2 * a);	
	x2root = (-b - sqrt(discriminant)) / (2 * a);

	// To produce the outcome of the roots.
	if (discriminant < 0) {			
		cout << "\n The roots are imaginary \n" << endl;
		cout << " x1 = " << x1root << "  ";
		cout << " x2 = " << x2root << endl;
	}

	else if (discriminant == 0) {
		cout << "\n The roots are real and equal \n" << endl;
		cout << " x1 = " << x1root << "  ";
		cout << " x2 = " << x2root << endl;
	}

	else {
		cout << "\n The roots are real and unequal \n" << endl;
		cout << " x1 = " << x1root << "  ";
		cout << " x2 = " << x2root << endl;
	}
	
	return 0;
}