#pragma once

class CPoint2d
{
public: 
	CPoint2d() = default;
	CPoint2d(int x, int y);
	CPoint2d(const CPoint2d & other);
public:
	int GetX() const;
	int GetY() const;
private:
	int m_x;
	int m_y;
};