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