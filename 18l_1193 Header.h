class student
{
private:
	static int counter;
	float *quizescore;
	int quizcap;
	int quiztaken;
	int id;
	float gpa;
	int q;
public:
	student();
	~student();
	student (int,float Gpa1);
	student (student &);
	void addquizscore();
	void setgpa(float);
	float getgpa();
	void print()const;
	void addquizscore(int score);
	bool compare(student s);
	void update(int x,float y);
};