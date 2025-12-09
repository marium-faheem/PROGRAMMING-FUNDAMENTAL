#include<stdio.h>
struct Complex{
	float real;
	float imag;
};
struct Complex read(){
	struct Complex c;
	printf("Enter real part:");
	scanf("%f",&c.real);
	printf("Enter imaginary part:");
	scanf("%f",&c.imag);
	return c;
}
void print(struct Complex c){
	printf("%.1f + %.1fi\n",c.real,c.imag);
}
struct Complex add(struct Complex a, struct Complex b){
	struct Complex result;
	result.real = a.real+b.real;
	result.imag = a.imag+b.imag;
	return result;
}
struct Complex multiply(struct Complex a, struct Complex b){
	struct Complex result;
	result.real = a.real * b.real - a.imag * b.imag;
	result.imag = a.real * b.imag + a.imag * b.real;
	return result;
}
int main(){
	struct Complex c1, c2, sum, product;
	c1 = read();
	c2 = read();
	print(c1);
	print(c2);
	sum = add(c1,c2);
	printf("Addition of complex numbers:");
	print(sum);
	product = multiply(c1,c2);
	printf("Multiplication of complex numbers:");
	print(product);
}
