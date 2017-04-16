#include "../stdafx.h"
#include "CCircle.h"


CCircle::CCircle(const CPoint2d & center, const double radius, const std::string & outlineColor, const std::string & fillColor)
{
	m_center = center;
	m_radius = radius;
	m_outlineColor = outlineColor;
	m_fillColor = fillColor;
}


std::string CCircle::ToString() const
{
	std::stringstream ss;
	ss << std::fixed << std::setprecision(2) << "circle <" << 
		m_center.GetX() << ", " << 
		m_center.GetY() << ">, R = " << 
		GetRadius() << ", S = " << 
		GetArea() << ", P = " << 
		GetPerimeter() << ", " << 
		m_outlineColor << ", " << 
		m_fillColor;
	return ss.str();
}

double CCircle::GetArea() const
{
	return M_PI * GetRadius() * GetRadius();
}

double CCircle::GetPerimeter() const
{
	return 2 * M_PI * GetRadius();
}

CPoint2d CCircle::GetCenter() const
{
	return m_center;
}

double CCircle::GetRadius() const
{
	return m_radius;
}
