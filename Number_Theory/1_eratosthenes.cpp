//sieve of eratosthenes
	const int maX = 1e6 + 1;
	bool comp[maX];
	inline void sieve() {
		memset(comp, false, sizeof(comp));
		comp[0] = true; comp[1] = true;
		for (int i = 2; i * i < maX; i++) {
			if (!comp[i])
				for (int j = 2 * i; j < maX; j += i) {
					comp[j] = true;
				}
		}
	}
