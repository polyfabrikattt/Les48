int taskX(int h, int a, int b) {
	if (h <= 0 || b <= 0 || a <= 0 || h <= b || a <= b) {
		return 0;
	}
	return (h - 2 * b + a - 1) / (a - b);
}