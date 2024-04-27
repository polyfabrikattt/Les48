bool task02(int number) {
	if (number < 0 || number > 9999) {
		return false;
	}
	int orig = number, rev = 0;

	while (number > 0) {
		rev = rev * 10 + number % 10;
		number /= 10;
	}
	return rev == orig;
}