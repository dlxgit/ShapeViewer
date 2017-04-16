#pragma once
#include "CShape.h"
#include "Point.h"
#define _USE_MATH_DEFINES 
#include <math.h>

class CCircle : public CShape
{
public:
	CCircle(const CPoint2d & center, double radius, const std::string & outlineColor, const std::string & fillColor);
	CPoint2d GetCenter() const;
	double GetRadius() const;

	std::string ToString() const override;
	double GetArea() const override;
	double GetPerimeter() const override;

private:
	CPoint2d m_center;
	double m_radius;
};