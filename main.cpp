#include <iostream>
using namespace std;

int main()
{
	int cos[100];
	
	int n;
	
	cout << "Introduceti numarul de mere in cos: ";
	cin >> n;
	
	cout << "\nIntroduceti pe rand culorile pentru fiecare mar in cos (1 - Galben, 0 - Rosu)\n";
	for (int i = 0; i < n; i++)
	    cin >> cos[i];
	

	int rosii = 0, galbene = 0, i = 0;

	for (i = 0; i < n; i++) 
		if (cos[i] == 0) 
			rosii++;
		
		else
		
			if (cos[i] == 1) 
				galbene++;
			
		
	
		cout << "Mere rosii: " << rosii;
	cout << "\nMere Galbene: " << galbene;

}


