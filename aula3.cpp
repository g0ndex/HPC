# include <iostream>
# include <cmath>

double f1(double x){
	return 1.0;
}

double f2 (double x){
	return x*x;
}

double f_pi (){
	
}

double soma_integral(double a, double b, int N){
double s = 0.0;
double dx = (b-a) / N;

	for(int k = 0; k < N; k++){
		s += f ( a + k*dx) + dx;
	}	
	return s;
}

int main(){
	std::cout << "Hello World!"
	<< std::endl;	

	double a = 0.0;
	double b = 1.0;
	int N =5000;
	
	double s = soma_integral(a, b, N, f_pi);
	double pi = 4 * s;

	std::cout << "pi = " << pi << std::endl;
	return 0;
}

