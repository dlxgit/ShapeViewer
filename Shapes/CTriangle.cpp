#include "../stdafx.h"
#include "CTriangle.h"

CTriangle::CTriangle(const CPoint2d & firstPoint, const CPoint2d & secondPoint, const CPoint2d & thirdPoint, const std::string & outlineColor, const std::string & fillColor)
{
	m_firstPoint = firstPoint;
	m_secondPoint = secondPoint;
	m_thirdPoint = thirdPoint;
	m_fillColor = fillColor;
	m_outlineColor = outlineColor;
}

std::string CTriangle::ToString() const
{
	std::stringstream ss;
	ss << std::fixed << std::setprecision(2) << 
		"triangle <" << 
		m_firstPoint.GetX() << ", " <<
		m_firstPoint.GetY() << ">, " << "<" <<
		m_secondPoint.GetX() << ", " <<
		m_secondPoint.GetY() << ">, <" <<
		m_thirdPoint.GetX() << ", " <<
		m_thirdPoint.GetY() << ">, S = " <<
		GetArea() << ", P = " << 
		GetPerimeter() << ", " << 
		m_outlineColor << ", " << 
		m_fillColor;
	return ss.str();
}

double CTriangle::GetArea() const
{
	double p = GetPerimeter() / 2;
	return sqrt(p * (p - CLineSegment(m_firstPoint, m_secondPoint).GetLength()) * (p - CLineSegment(m_secondPoint, m_thirdPoint).GetLength()) * (p - CLineSegment(m_firstPoint, m_thirdPoint).GetLength()));
}

double CTriangle::GetPerimeter() const
{
	return CLineSegment(m_firstPoint, m_secondPoint).GetLength() + CLineSegment(m_secondPoint, m_thirdPoint).GetLength() + CLineSegment(m_firstPoint, m_thirdPoint).GetLength();
}

std::array<CPoint2d, 3> CTriangle::GetPoints() const
{
	return{ m_firstPoint, m_secondPoint, m_thirdPoint };
}

std::array<CLineSegment, 3> CTriangle::GetLines() const
{
	return{ CLineSegment(m_firstPoint,m_secondPoint), CLineSegment(m_secondPoint, m_thirdPoint), CLineSegment(m_firstPoint, m_thirdPoint)};
}