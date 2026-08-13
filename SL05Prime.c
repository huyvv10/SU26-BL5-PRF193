#include <stdio.h>

int isPrime(int);
int isPrime2(int n);
void listPrimeToN(int n);
void listTheFirstNPrime(int n);
void sumAveragePrime(int n);
	
int main() {
	int n;
	scanf("%d", &n);
	if (isPrime2(n)==1)
		printf("%d is a prime number\n",n);
	else
		printf("%d is not a prime number\n", n);
	listPrimeToN(n);		//Call void module
	printf("\nList the first %d prime numbers: ", n);
	listTheFirstNPrime(n);
	printf("\nSum and Average\n");
	sumAveragePrime(n);
	
	return 0;
}

//Return 1 if n is a prime number
//Return 0 otherwise.
int isPrime(int n) {
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}
int isPrime2(int n) {
	int i, rs=1;
	if (n<2) {
		rs=0;
	} else {
		for (i=2; i*i<=n; i++)
			if (n%i==0) {
				rs=0;
				break;
			}
	}
	return rs;
}
//Display prime numbers from 2 to n.
void listPrimeToN(int n){
	int i;
	if (n>=2)
		for (i=2; i<=n; i++)
			if (isPrime(i)==1)
				printf("%d ", i);
}
//List the first n prime numbers
void listTheFirstNPrime(int n){
	int i=2, count=0;
	while (count!=n){
		if (isPrime(i)==1){
			printf("%d ", i);
			count++;
		}
		i++;	
	}
}

//Display total value and average of the first n prime numbers
void sumAveragePrime(int n){
	int i=2, count=0, S=0;
	while (count!=n){
		if (isPrime(i)==1){
			S+=i;		//S=S+i
			count++;
		}
		i++;	
	}	
	printf("%d %.2f", S, (float)S/n);
}