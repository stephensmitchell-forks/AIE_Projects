///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File:			Vector4.cpp
// Author:			Ian Rich
// Date Created:	October 2013
// Brief:			3D Vector Class Definition
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Vector4.h"
#include "Static Constants.h"
#include <string>
#include <iostream>
using namespace std;

//////////////////////////////-- CONSTRUCTION / DESTRUCTION --////////////////////////////////////////////////////////////

// default constructor
Vector4::Vector4 ()
{
	m_fX = 0;
	m_fY = 0;
	m_fZ = 0;
	m_fW = 1;
	//cout<< "Default Vector Constructed!\n";
}

// copy constructor
Vector4::Vector4(const Vector4& a_rVecSource)
{
	m_fX = a_rVecSource.m_fX;
	m_fY = a_rVecSource.m_fY;
	m_fZ = a_rVecSource.m_fZ;
	m_fW = a_rVecSource.m_fW;
}

// constructor that takes in x and y values
Vector4::Vector4 (float a_fX, float a_fY, float a_fZ, float a_fW)
{
	m_fX = a_fX;
	m_fY = a_fY;
	m_fZ = a_fZ;
	m_fW = a_fW;
	//cout<< "Vector constructed with given values " << a_fX << " and " << a_fY <<"!\n";
}

// destructor
Vector4::~Vector4 ()
{
	//cout<< "Vector Destroyed, Muhahah!\n";
}

//////////////////////////////-- MATHS --////////////////////////////////////////////////////////////

// returns magnitude of vector
float Vector4::GetMagnitude() const
{
	return sqrt(m_fX * m_fX + m_fY * m_fY + m_fZ * m_fZ + m_fW * m_fW);
}

// normalize a vector
void Vector4::Normalize()
{
	float s = GetMagnitude();
	m_fX = m_fX / s;
	m_fY = m_fY / s;
	m_fZ = m_fZ / s;
	m_fW = m_fW / s;
}

// returns a normalized version of vector
Vector4 Vector4::ReturnNormalized() const
{
	float fMag = GetMagnitude();
	Vector4 vec(m_fX / fMag, m_fY / fMag, m_fZ / fMag, m_fW / fMag);
	return vec;
}

