#pragma once
#include "CShape.h"

class CRectangle : public CShape
{
public:
	CRectangle(const CPoint2d & position, double width, double height, const std::string & outlineColor, const std::string & fillColor);
	CPoint2d GetPosition() const;
	double GetWidth() const;
	double GetHeight() const;

	std::string ToString() const override;
	double GetArea() const override;
	double GetPerimeter() const override;
private:
	CPoint2d m_position;
	double m_width;
	double m_height;
};