#include "HighScore.h"
using namespace hsc;

void HighScore::maxScore(int &_points, string &_name)
{
	Puntaje score = _Scores->front();
	_points = score._points;
	_name = score._name;
}
void HighScore::minScore(int &_points, string &_name)
{
	Puntaje score = _Scores->back();
	_points = score._points;
	_name = score._name;
}
bool HighScore::addScore(int _points, string _name)
{
	int size = _Scores->size();
	Puntaje add;
	add._points = _points;
	add._name = _name;
	_Scores->push_back(add);
	_Scores->sort();
	return (size < (int)_Scores->size());
}
list<int>* HighScore::getScore()
{
	list<int>* pointsList = new list<int>();
	for (list<Puntaje>::iterator i=_Scores->begin(); i!=_Scores->end(); ++i) {
		pointsList->push_back(i->_points);
	}
	return pointsList;
}
list<string>* HighScore::getName()
{
	list<string>* pointsList = new list<string>();
	for (list<Puntaje>::iterator i=_Scores->begin(); i!=_Scores->end(); ++i) {
		pointsList->push_back(i->_name);
	}
	return pointsList;
}