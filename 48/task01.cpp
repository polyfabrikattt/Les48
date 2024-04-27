int task01(int hour1, int minute1, int second1, int hour2, int minute2, int second2) {
	if (hour1 < 0 || minute1 < 0 || second1 < 0 || hour2 < 0 || minute2 < 0 || second2 < 0) {
		return -1;
	}
	return abs((hour1 * 3600 + minute1 * 60 + second1) - (hour2 * 3600 + minute2 * 60 + second2));
}