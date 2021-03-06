#ifndef STORY_H
#define STORY_H

class Story;

#include "Paragraph.h"
#include <vector>

class Story {


public:

	Story();
	~Story();
	Story(const Story& aStory);
	Story(const string& a);  
	

	void show();
	friend Story operator+(const Paragraph& a, const Story& b);
	friend ostream& operator<<(ostream& out, const Story& b);
	
	void save(const string& a);
	Story operator+(const Story& b);
	Story operator+(const Paragraph& b);
	
	//posstfix
    Story operator++(int);
	Story operator--(int);
	//postfix
	
	Story& operator=(const Story& aStory);
	Story& operator+(const int& i);
	
	//prefix
	Story& operator++();
	Story& operator--();
	//prefix

	Paragraph first();
	Story rest();
	
	Paragraph* head;
	Story* next;

	
private:
	vector<string> v;
	
};

#endif

