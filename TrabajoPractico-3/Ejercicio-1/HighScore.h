#include <list>
#include <iostream>
namespace hs {
	using namespace std;
	struct Puntaje {
		int _points;
		string _name;
		bool operator<(const Puntaje &rhs) const { 
			return  _points > rhs._points; 
		}
	};
	class HighScore {
		list<Puntaje>* _Scores;
	public:
		HighScore() {}
		~HighScore() {}
		void maxScore(int &_points, string &_name);
		void minScore(int &_points, string &_name);
		bool addScore(int _points, string _name);
		list<int>* getScore();
		list<string>* getName();
	};
}