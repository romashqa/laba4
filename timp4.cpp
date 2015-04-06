/**  
 	\file: timp4.cpp 
 	*/ 
 #include <iostream> 
 using namespace std;

 
 //! \ void Pryamoy(...) - rekursivnyi vyvod pryamogo poryadka 
 void Pryamoy(int* Derevo, int N, int Cel) 
 { 
 	cout << Cel << ' '; 
 	for (int i=0; i<N; i++) 
 		if ( Derevo[i] == Cel) 
 			Pryamoy( Derevo, N, i+1); 
 } 
 //! \ void Obratnyi(...) - rekursivnyi vyvod obratnogo poryadka 
 void Obratnyi(int* Derevo, int N, int Cel) 
 { 
 	for (int i=0; i<N; i++) 
 		if ( Derevo[i] == Cel) 
 			Obratnyi( Derevo, N, i+1); 
 	cout << Cel << ' '; 
 } 
 
 
 //! \ void Simmetr(...) - rekursivnyi vyvod simmetrichnogo poryadka 
 void Simmetr(int* Derevo, int N, int Cel) 
 { 
 	int k = 1; 
	for (int i=0; i<N; i++) 
 		if ( Derevo[i] == Cel) 
 		{ 
 			Simmetr( Derevo, N, i+1); 
 			if ( k )  
 			{ 
 				cout << Cel << ' '; 
 				k = 0; 
 			} 
 		}	 
 	if ( k ) cout << Cel << ' '; 
 } 
 
 
 /*! \ void main() - tochka vhoda v programmu 
  
 *	Chitaet derevo 
  
 *	Vyvodit 3 massiva */ 
 void main() 
 { 
 	int N; 
 	int* Derevo; 
 	cout << "N = "; 
 	cin >> N; 
 	Derevo = new int [N]; 
 
 
 	cout << "\nMassiv: "; 
 	for (int i=0; i<N; i++) 
 	    cin >> Derevo[i]; 
 
 
 	Pryamoy(Derevo, N, 1); 
 	cout << "\n"; 
 	Obratnyi(Derevo, N, 1); 
 	cout << "\n"; 
 	Simmetr(Derevo, N, 1); 
 	cout << "\n"; 
 
 
 	system("pause"); 
 } 
 
