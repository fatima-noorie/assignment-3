//essay topic :our fake perception of social acceptance 
#include<iostream>
#include<string>
using namespace std;
class human
{
private://you can add other stuff like hair color ,and religious affiliations
	string g;//gender
	string nation;
	string skin_color;
	string edu;
	float height;//in inches
	float mass;//in lbs
	string r;//religion
	int status;//out of 100;//measure of social acceptance
public:
	human(string n = " ", string nat = " ", string s = "white", string a = " ", float b = 0, float e = 0, string c = "atheist", int d = 0) :g(n), nation(nat), skin_color(s), edu(a), height(b), mass(e), r(c), status(d)
	{}
	void set_info()
	{
		cout << "enter particulars" << endl;
		cout << "enter your gender(m/f) " << endl;
		cin >> g;
		cout << "enter your skin color(black/brown/white) " << endl;
		cin >> skin_color;
		cout << "enter your education (doc/eng) " << endl;
		cin >> edu;
		cout << "enter your height " << endl;
		cin >> height;
		cout << "enter your mass " << endl;
		cin >> mass;
		cout << "enter your religion (athiest/monogamist/communist)" << endl;
		cin >> r;
	}
	void get_info()
	{
		cout << "gender" << g << endl;
		//basically afunction to display info complete it yourself 
	}
	float BMI()
	{
		return mass*0.45 / height / height / 0.025 / 0.025;
	}
	int social_acceptance()
	{
		if (nation == "asian")
		{
			if (g == "f")
			{
				if (BMI() <= 18.5)
				{
					status = status + 30;
				}
			}
			else
			{
				if (BMI() <= 24)
				{
					status = status + 40;
				}
			}
			if (skin_color == "white")
			{
				status = status + 40;
			}
			if (edu == "doc" || edu == "eng")
			{
				status = status + 10;
			}
			if (r == "monogamist" || r == "communist")
			{
				status = status + 10;
			}
			else if (r == "athiest")
			{
				status = status - 10;
			}
		}
		if (nation == "europian")
		{
			if (g == "f")
			{
				if (BMI() <= 18.5)
				{
					status = status + 30;
				}
			}
			else
			{
				if (BMI() <= 24)
				{
					status = status + 40;
				}
			}
			if (skin_color == "white")
			{
				status = status + 40;
			}
			if (edu == "doc" || edu == "eng")
			{
				status = status + 10;
			}
			if (r == "monoathism" || r == "communist")
			{
				status = status + 10;
			}
			else if (r == "athiest")
			{
				status = status - 10;
			}
		}
		return status;
	}
};
void main()
{
	human fatima;
	fatima.set_info();
	cout << fatima.social_acceptance() << endl;
}