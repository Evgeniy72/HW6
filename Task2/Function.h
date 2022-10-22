#pragma once
class Counter
{private:
	int count;
public:
	void inc();
	void decr();
	double eq();
	Counter(int count) { this->count = count; }
	Counter()
	{
		count = 1;
	}
};