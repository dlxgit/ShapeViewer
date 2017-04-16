#pragma once
#include "CShape.h"
#include "CLineSegment.h"
#include <array>

class CTriangle : public CShape
{
public:
	CTriangle(const CPoint2d & firstPoint, const CPoint2d & secondPoint, const CPoint2d & thirdPoint, const std::string & outlineColor, const std::string & fillColor);
	std::array<CPoint2d, 3> GetPoints() const;
	std::array<CLineSegment, 3> GetLines() const;
	std::string ToString() const override;
	double GetArea() const override;
	double GetPerimeter() const override;

private:
	CPoint2d m_firstPoint;
	CPoint2d m_secondPoint;
	CPoint2d m_thirdPoint;
};