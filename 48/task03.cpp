int task03(int v, int t) {
	if (t < 0) {
		return -1;
	}
	if (v < 0) {
		return 56 - abs((v * t % 56));
	}
	else {
		return (v * t % 56);
	}
}