#include "../stdafx.h"
#include "CLineSegment.h"
#include <math.h>


CLineSegment::CLineSegment(const CPoint2d & first, const CPoint2d & second)
{
	m_firstPoint = first;
	m_secondPoint = second;
}

std::pair<CPoint2d, CPoint2d> CLineSegment::GetPoints() const
{
	return std::make_pair(m_firstPoint, m_secondPoint);
}

double CLineSegment::GetLength() const
{
	return sqrt(pow(m_firstPoint.GetX() - m_secondPoint.GetX(), 2) + pow(m_firstPoint.GetY() - m_secondPoint.GetY(), 2));
}