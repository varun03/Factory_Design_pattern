/*
*******@author @varun Kumar*******
*******file Name factory_design.h****/



/*Making an Interface of shape class */
class shape {

public :
virtual void darw() = 0;
};

class Getshapeobj
{

public :
	shape *shapebj ;

	shape * getshapeobject(int shapetype);
};

class Tringale : public shape
{
public :

	void darw();
};

class circle : public shape
{
public :

	void darw();
};

class rectangle : public shape
{
public :

	void darw();
};