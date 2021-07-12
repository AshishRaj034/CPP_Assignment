class MyTime
{
private:
	int hrs;
	int mins;
	int sec;
public:
	MyTime();
	MyTime(int, int, int);
	MyTime(int, int);
	MyTime operator + (const MyTime&);
	MyTime operator - (const MyTime&);
	MyTime operator + (int);
	MyTime operator - (int);
	void operator++ ();
	void operator++ (int);
	bool operator == (const MyTime&);
	MyTime& operator += (const Mytime&);
	bool operator < (const MyTime&);
	bool operator > (const MyTime&);
	void display();
};
