#pragma once
#include "CShape.h"

class CLineSegment
{
public:
	CLineSegment(const CPoint2d & first, const CPoint2d & second);

	std::pair<CPoint2d, CPoint2d> GetPoints() const;
	double GetLength() const;

private:
	CPoint2d m_firstPoint;
	CPoint2d m_secondPoint;
};