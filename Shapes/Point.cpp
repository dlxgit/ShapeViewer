#include "../stdafx.h"
#include "Point.h"

CPoint2d::CPoint2d(int x, int y)
{
	this->m_x = x;
	this->m_y = y;
}

CPoint2d::CPoint2d(const CPoint2d & other)
{
	m_x = other.m_x;
	m_y = other.m_y;
}

int CPoint2d::GetX() const
{
	return m_x;
}

int CPoint2d::GetY() const
{
	return m_y;
}